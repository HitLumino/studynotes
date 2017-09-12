## 如何创建一个repository并同步
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
3. git commit -m "commit"
![](picture_source/2.png)
4. 提交到网络
git push origin master  
5. 从网上pull到本地
git push origin master  
## 解除密码输入
git config --global credential.helper store
