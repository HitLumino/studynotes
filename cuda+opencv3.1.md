# opencv3.1+opencv3.1_contrib+CUDA8.0
* 安装依赖库： 
```
$ sudo apt-get install build-essential 
$ sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev
```
* cmake 命令
```
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=/home/lumino/Soft/opencv_contrib_3.1.0/modules/  -DWITH_CUDA=ON -DCUDA_ARCH_BIN="5.3" -DCUDA_ARCH_PTX="" -DBUILD_TESTS=OFF -DBUILD_PERF_TESTS=OFF -DCUDA_FAST_MATH=ON -DCMAKE_INSTALL_PREFIX=/usr/local .. 
 ```
注意路径：`OPENCV_EXTRA_MODULES_PATH=/home/lumino/Soft/opencv_contrib_3.1.0/modules/`
* make
* sudo make install 
* 配置pkg-config，用于管理opencv安装库 
  sudo vim /etc/ld.so.conf   
  将下面的目录   /usr/local/lib    添加到文件中   
  sudo ldconfig -v   
  export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/local/lib/pkgconfig    
* 使用以下命令查看pkg-config配置信息： 
  pkg-config --libs opencv  
* 测试安装是否完成，测试程序采用opencv自带的sample
```
$ cd ~/Opencv_Source/opencv-3.1.0/samples/   
$ cmake .   
$ make  
$ cd cpp/   
```
## 报错
modules/cudalegacy/src/graphcuts.cpp:120:54: error:   
‘NppiGraphcutState’ has not been declared  
typedef NppStatus (*init_func_t)(NppiSize oSize,   
NppiGraphcutState** ppState, Npp8u* pDeviceMem);  
这是因为opecv3.0与cuda8.0不兼容导致的。  
### 解决方案
修改 ～/opencv/modules/cudalegacy/src/graphcuts.cpp文件内容：
```
//#if !defined (HAVE_CUDA) || defined (CUDA_DISABLER)
#if !defined (HAVE_CUDA) || defined (CUDA_DISABLER)||(CUDA_VERSION>=8000)
```


