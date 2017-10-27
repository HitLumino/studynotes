* test_int:19: error: stray '\200' in program  
这个错误是由于使用了中文引号或其他全角符号，还有一种就是有中文的空格（这个不容易观察），需调到顶格处，再用tab即可。
[http://blog.csdn.net/qq_25827845/article/details/50905263]

* [编译DSO](http://mp.weixin.qq.com/s?__biz=MzI5MTM1MTQwMw==&mid=2247485263&idx=1&sn=d0d50d674c5b6209c84acb2c4f618e1e&chksm=ec10b94bdb67305de5d5dd484c04d795aaf7657875fb7c83108091ff2617ce4f5f1e544404cd&scene=0#wechat_redirect)
```
[100%] Linking CXX executable bin/dso_dataset
/usr/bin/ld: CMakeFiles/dso_dataset.dir/src/main_dso_pangolin.cpp.o: undefined reference to symbol 'pthread_create@@GLIBC_2.2.5'
//lib/x86_64-linux-gnu/libpthread.so.0: error adding symbols: DSO missing from command line
collect2: error: ld returned 1 exit status
CMakeFiles/dso_dataset.dir/build.make:153: recipe for target 'bin/dso_dataset' failed
make[2]: *** [bin/dso_dataset] Error 1
CMakeFiles/Makefile2:67: recipe for target 'CMakeFiles/dso_dataset.dir/all' failed
make[1]: *** [CMakeFiles/dso_dataset.dir/all] Error 2
Makefile:83: recipe for target 'all' failed
make: *** [all] Error 2
```


