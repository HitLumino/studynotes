## 如何创建一个repository并同步
在所在目录里建文件夹  
echo "# studynotes" >> README.md  
git init  
git add README.md  
git commit -m "first commit"  
git remote add origin https://github.com/HitLumino/studynotes.git  
git push -u origin master//第一次需要 -u   

## Git 管理修改
1. readme.txt 增加图片    
![](picture_source/1.png)
2. 添加到暂存区  
git add . //将全部文件添加到暂存区   
git add README.txt　//将README.txt添加到暂存区    　　　
3. 将文件添加到分支   
git commit -m "commit"  
![](picture_source/2.png)
4. 提交到网络  
git push origin master  
5. 从网上pull到本地  
git pull origin master  
## 解除密码输入
git config --global credential.helper store

## 更新被拒绝
error: 无法推送一些引用到 'git@github.com:smallDou/jsTest.git'
提示：更新被拒绝，因为远程仓库包含您本地尚不存在的提交。这通常是因为另外
提示：一个仓库已向该引用进行了推送。再次推送前，您可能需要先整合远程变更
提示：（如 'git pull ...'）。
提示：详见 'git push --help' 中的 'Note about fast-forwards' 小节。  
* 解决方案：
lumino@lumino:~/hitlumino/studynotes$ git pull  
remote: Counting objects: 3, done.  
remote: Compressing objects: 100% (3/3), done.  
展开对象中: 100% (3/3), 完成.  
remote: Total 3 (delta 2), reused 0 (delta 0), pack-reused 0  
来自 https://github.com/HitLumino/studynotes  
   fe39e60..e8787df  master     -> origin/master  
自动合并 xxnet_setting.md  
Merge made by the 'recursive' strategy.  
 xxnet_setting.md | 2 +-  
 1 file changed, 1 insertion(+), 1 deletion(-)  
 ```
lumino@lumino:~/hitlumino/studynotes$ git push origin master   
对象计数中: 18, 完成.  
Delta compression using up to 4 threads.  
压缩对象中: 100% (18/18), 完成.  
写入对象中: 100% (18/18), 1.80 KiB | 0 bytes/s, 完成.  
Total 18 (delta 11), reused 0 (delta 0)  
remote: Resolving deltas: 100% (11/11), completed with 3 local objects.  
To https://github.com/HitLumino/studynotes.git  
   e8787df..f98f180  master -> master  
```
## git push时提示：更新被拒绝，因为您当前分支的最新提交落后于其对应的远程分支
```
在对本地库中的文件执行修改后，想git push推送到远程库中，结果在git push的时候提示出错：

! [rejected]        master -> master (non-fast-forward)
error: 无法推送一些引用到 'git@github.com:GarfieldEr007/XXXX.git'
提示：更新被拒绝，因为您当前分支的最新提交落后于其对应的远程分支。
提示：再次推送前，先与远程变更合并（如 'git pull ...'）。详见
提示：'git push --help' 中的 'Note about fast-forwards' 小节。
```

###解决

因为当前分支的最新提交落后于其对应的远程分支，所以我们先从远程库fetch到更新再和本地库合并，之后就可以git push操作了。

## 本地新建文件夹，从远程pull

1. （先进入项目文件夹）通过命令 git init 把这个目录变成git可以管理的仓库
git init
2. 把文件添加到版本库中，使用命令 git add .
git add .
3. 用命令 git commit告诉Git，把文件提交到仓库。引号内为提交说明
git commit -m 'first commit'
4. 关联到远程库
git remote add origin https://github.com/HitLumino/slambook.git
5. 获取远程库与本地同步合并（如果远程库不为空必须做这一步，否则后面的提交会失败）
git pull --rebase origin master
6. 把本地库的内容推送到远程，使用 git push命令，实际上是把当前分支master推送到远程。执行此命令后会要求输入用户名、密码，验证通过后即开始上传。
git push -u origin master
7. git pull origin master
## 无法上传大文件报错，删除依旧报错
上传文件过大，取消再次上传，还是报错。关键要撤回那个commit  
`git log` :可以查看提交日志  
依次撤销commit   
`git reset `commit 代号，类似4eb35e831b500b42b860650aa8d04eb6e8d20203   
* 删除线上文件夹做法：  
`dir`  查看有哪些文件夹  
`git rm -r --cached target ` 删除target文件夹  

## 问题
lumino@lumino:~/Soft$ git clone git@github.com:strasdat/Sophus.git  
正克隆到 'Sophus'...  
Permission denied (publickey).  
fatal: Could not read from remote repository.  

Please make sure you have the correct access rights 
and the repository exists.  
nihao
