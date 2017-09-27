[sublime text3 输入中文的解决方法](http://www.cnblogs.com/yyh1/p/5757686.html)
[目前没有效果](http://geek.csdn.net/news/detail/44464)
1. 下载我们需要的文件,打开终端 ,输入：  
`git clone https://github.com/lyfeyaj/sublime-text-imfix.git`
2. 将下载的文件解压之后，移到当前目录（～目录下边），然后执行下边命令：  
```
cd ~/sublime-text-imfix （前提：解压后的sublime-text-imfix必须在~目录下） 
sudo cp ./lib/libsublime-imfix.so /opt/sublime_text/ 
sudo cp ./src/subl /usr/bin/
```
3. 最后把sublime都关掉，然后在终端输入subl，就可以在sublime使用中文了(*必须在终端输入subl启动sublime才起作用的)

[Qt5.6.0无法输入中文](http://blog.csdn.net/u013812682/article/details/52101088)
```
sudo apt-get install fcitx-frontend-qt5
dpkg -L fcitx-frontend-qt5//查看fcitx-frontend-qt5 的安装目录

$ sudo cp /usr/lib/x86_64-linux-gnu/qt5/plugins/platforminputcontexts/libfcitxplatforminputcontextplugin.so  /opt/Qt5.6.0/5.6/gcc_64/plugins/platforminputcontexts

$ ~$: sudo cp /usr/lib/x86_64-linux-gnu/qt5/plugins/platforminputcontexts/libfcitxplatforminputcontextplugin.so  /opt/Qt5.6.0/Tools/QtCreator/lib/Qt/plugins/platforminputcontexts
```


