[链接](http://my.phirobot.com/blog/2013-12-overlay_catkin_and_rosbuild.html)
概念
ROS里面有一系列概念，作为初学者，最先接触的概念非node, package和workspace莫属了。

node
node是ROS里面最小的执行单位，你可以把node看成是一个main函数，当你启动一个node，就相当于启动了一个main函数，通常这个main函数会不停循环监听某个消息，或者执行一系列操作，直至你关闭它，或者执行完退出。

package
package是ROS里面最小的编译单位，也是ROS里面的搜索单位，你可以把package看成是一个有结构的文件夹，它包含多个node以及一些结构性质文件。ROS里面的node，是以package为单位进行编译的，一次编译package里面多个node。

通常一条ROS的node执行命令具有以下结构：

rosrun <package_name> <node_name>
即执行某个node的时候，要标识这个node是属于哪个package的，ROS会先通过package的名字检索到package，再通过node名字找这个package下对应的node去执行。

workspace
首先思考一个问题：package都被放在什么地方？

package存在于两个地方。一个是ROS库，即当你安装ROS的地方，通常在 opt/ros/<distro>/share/ (<distro>指你的ROS版本，如hydro, groovy)里面（hydro以前的版本还会有stack），你无需关心，这些都是从ROS远程仓库下载下来的。另外一个地方，就是我们自己建的workspace了，我们自己的package，或者网上下载的别人的package都必须放在workspace里面编译，才可以使用。

workspace是ROS里面最小环境配置单位，你可以把workspace看成是一个有结构的文件夹，它包含多个package以及一些结构性质文件。一次将一个workspace配置进环境变量里面，你才能使用ROS命令执行与这个workspace里面的package相关的操作。

build system
前面提到的package和workspace都是有结构的，那么这些结构到底是怎么规定的呢？

这些结构，就是由build system（编译系统）规定的。当你运行workspace相关的命令，它会在一个你指定的空文件夹下面放很多功能性质的文件，并将这个空文件夹变成一个workspace。当你运行package相关的命令，它会在你指定的路径下面创建出package。

目前，ROS的build system有两种，一种叫做catkin，另外一种叫做rosbuild。利用不同的build system创建出来的workspace和package因此也分为两种。

rosbuild是ROS传统的编译系统，从最初沿用至今，但面临被抛弃的状态。catkin源于ROS fuerte，当时只是被一小部分人使用，在fuerte的下一个版本groovy开始被正式使用，用于取代rosbuild。为什么要用catkin取代rosbuild？当然是因为catkin比rosbuild好很多，在实际应用过程中会感受到的，具体理由可以看看这个 [catkin_conceptual_overview] 。基于catkin编写的package叫做wet package，基于rosbuild编写的package叫做dry package，在ROS相关的问答里面会常常看到这种说法的。

source setup.bash
在workspace部分介绍了package存在的两个地方，那么，是不是我们打开terminal，就能使用ROS命令，系统就能找到那些package呢？

这里，就要了解 source setup.bash 的功能。 source setup.bash 就是执行 setup.bash 脚本，而这个脚本，就会在环境中配置一些数据。

通常我们安装完ROS后，要先 source /opt/ros/<distro>/setup.bash ，这条语句的目的就是将ROS相关的命令配置在当前terminal工作的环境中，我们在这个环境中就能使用ROS命令了，否则系统是无法知道ROS命令的存在的。同时，这条语句也会让ROS库中的package能够被找到。

当我们创建一个workspace后，同样系统也是不会知道这个workspace存在的，一切与这个workspace相关的ROS命令都会失效——这个workspace里面的package不会被ROS命令发现。要想将这个workspace的信息配置到环境里面，就必须执行这个workspace里面的 setup.bash 脚本，例如catkin的就是 source ~/catkin_ws/devel/setup.bash ，rosbuild的就是 source ~/rosbuild_ws/setup.bash 。

overlay
再来思考一个问题：你有一个或者多个catkin workspace，同时你也有一个或者多个rosbuild workspace；而某个名字叫example_package的package在ROS库，在每个workspace里面都存在，当你运行 rosrun example_package example_package 的时候，到底会运行哪个位置的example_package呢？

这就关系到overlay的概念。overlay就是一种操作，可以让不同的workspace层层覆盖，最底层的是ROS库。通过这种覆盖关系，当寻找某个package的时候，ROS会先从顶层的workspace找，如果找不到再依次往下找。也可以看成是一个路径链条，当我们想把通过overlay链接起来的workspace和ROS库的路径配入环境的时候，我们只需要source overlay链条顶层的workspace的setup.bash脚本即可。

overlay rosbuild_ws->catkin_ws->ROS库
最常见的配置是一个rosbuild workspace和一个catkin workspace了（对应的文件夹分别为 rosbuild_ws 和 catkin_ws ）。因为有时候我们需要使用这两种workspace里面的package，而往往是自己的package优先于ROS库里面自带的package的。

overlay catkin_ws->ROS库
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws/
catkin_make
第一条语句创建catkin_ws文件夹，以及src文件夹；第二条和第三条语句是在src路径下初始化catkin workspace，并指定src路径是package存放的路径；第四条和最后一条语句是在catkin_ws路径下编译整个workspace，将会生成catkin workspace的结构，以及编译src下所有的package。

Note 上面的操作会自动overlay ROS库，即catkin_ws->ROS库。如果不需要再加入rosbuild workspace，则执行 echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc 就行了，跳过后面的所有步骤。
overlay rosbuild_ws->catkin_ws
sudo apt-get install python-rosinstall
在新装的系统第一次运行rosbuild相关操作前，还要先安装一下rosinstall。

mkdir ~/rosbuild_ws
cd ~/rosbuild_ws
rosws init . ~/catkin_ws/devel
mkdir ~/rosbuild_ws/sandbox
rosws set ~/rosbuild_ws/sandbox
前两条语句创建并进入rosbuild_ws文件夹；第三条语句初始化rosbuild_ws并overlay前面创建的catkin workspace；第四条和最后一条语句创建文件夹sandbox并将其设置为package存放的文件夹。

source setup.bash
echo "source ~/rosbuild_ws/setup.bash" >> ~/.bashrc
source ~/.bashrc
每次打开terminal，都将会执行 ~/.bashrc 脚本。因此，第一条语句将引号内的内容写入 ~/.bashrc 后，每次打开terminal，overlay顶层的rosbuild_ws的setup.bash都会被source，就不用我们手动source了。

检查overlay路径
echo $ROS_PACKAGE_PATH
确认是否显示了下面4个路径：

/home/<user>/rosbuild_ws/sandbox:/home/<user>/catkin_ws/src:/opt/ros/<distro>/share:/opt/ros/<distro>/stacks
如果不全，说明之前的overlay出了问题。再进一步做检查：

gedit ~/rosbuild_ws/.rosinstall
看看有没有下面的内容：

- setup-file: {local-name: /home/<user>/catkin_ws/devel/setup.sh}
- other: {local-name: sandbox}
第一条指被overlay的catkin workspace路径，第二条指该rosbuild workspace的package存放目录。

更多的overlay概念，可以参考 [catkin_workspace_overlaying] 和 [using_rosbuild_with_catkin] 。

Reference
[catkin_conceptual_overview](http://wiki.ros.org/catkin/conceptual_overview)
[catkin_workspace_overlaying](http://wiki.ros.org/catkin/Tutorials/workspace_overlaying)
[using_rosbuild_with_catkin](http://wiki.ros.org/catkin/Tutorials/using_rosbuild_with_catkin)
