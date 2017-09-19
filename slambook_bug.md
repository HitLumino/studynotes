# 问题：
##  `/usr/local/include/sophus/so3.h:26:22: fatal error: Eigen/Core: 没有那个文件或目录`
### 问题描述：编译高博第四讲Sophus  Ubuntu 16.04
```
lumino@lumino:~/workspace/slambook-master/ch4/useSophus/build$ cmake ..
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/lumino/workspace/slambook-master/ch4/useSophus/build
lumino@lumino:~/workspace/slambook-master/ch4/useSophus/build$ make
Scanning dependencies of target useSophus
[ 50%] Building CXX object CMakeFiles/useSophus.dir/useSophus.cpp.o
In file included from /home/lumino/workspace/slambook-master/ch4/useSophus/useSophus.cpp:8:0:
/usr/local/include/sophus/so3.h:26:22: fatal error: Eigen/Core: 没有那个文件或目录
compilation terminated.
CMakeFiles/useSophus.dir/build.make:62: recipe for target 'CMakeFiles/useSophus.dir/useSophus.cpp.o' failed
make[2]: *** [CMakeFiles/useSophus.dir/useSophus.cpp.o] Error 1
CMakeFiles/Makefile2:67: recipe for target 'CMakeFiles/useSophus.dir/all' failed
make[1]: *** [CMakeFiles/useSophus.dir/all] Error 2
Makefile:83: recipe for target 'all' failed
make: *** [all] Error 2
```
### 解决方案：

```
cd /usr/local/include
sudo ln -s eigen3/Eigen Eigen
sudo ln -s eigen3/unsupported unsupported
sudo ldconfig 
```


