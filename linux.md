**前言：为了牢记每一个命令，特此记录与总结。不断更新....**  
[Linux命令大全](http://man.linuxde.net/rm)
[TOC]

# 目录：
## 查找类
[查找文件命令总结](http://blog.csdn.net/jessica1201/article/details/8139249)
1. whereis
    whereis命令只能用于搜索`二进制文件(-b)`、`源代码文件(-s)`、`说明文件(-m)`。如果省略参数则返回所有的信息。   
2. locate
    locate命令实际是"find -name"的另一种写法，但是查e找方式跟find不同，它比find快得多。用locate命令查找文件之前手动的用`updatedb`命令更新数据库。(`注意权限`)  
3. find
    find命令的一般格式为：find <指定目录><指定条件><指定动作>，即find pathname -options [-print -exec -ok]  
    pathname：pathname为搜索的目录及其子目录，默认情况下为当前目录  
    常用的option选项：  
      - name：按文件名来查找文件  
      - user：按照文件的属主来查找文件  
      - group：按照文件所属的组来查找文件  
      - perm：按照文件权限来查找文件  
      - prune：不在当前指定目录中查找  
4. which
    which命令是在PATH变量指定的路径中搜索指定的系统命令的位置。用echo $PATH可显示当前PATH变量的值。

## apt-get
* apt-get update
* apt-get install
* apt-get remove (保留配置文件)
* apt-get -purge remove (删除配置文件)
* apt-get clean (安装的软件的备份删除)
* apt-get autoclean 

