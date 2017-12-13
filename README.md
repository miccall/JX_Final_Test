# JX_Final_Test
- Southwest University for Nationalities 
- 西南民族大学
- Computer Applications and Development Association 
- 计算机应用与发展协会 
- 2017 session 
- 2017届 
- Study Tour
- 结业考核

> create by miccall

## 一 规则

1. 操作为开放式，你随时可以百度，可以谷歌，可以寻求老师或他人资助，但完全依靠自己的人脉和资源关系。
2. 时间限制为24小时，也就是你拿到题开始，到第二天的此时此刻为止。（每个人时间不同，别问我我是怎么计算的）
3. 考察题目相当简单，别有压力，我会提供一部分教程。 虽然简单，但很锻炼你的能力，希望有兴趣加入研发部的认真对待。
4. 研发部不是神秘的部门，就像你现在看到的文字，虽然是研发部人员写的，但是你仍然可以看懂。
5. 题目要求在第二栏目，参考教程在第三栏目，提交作业的方式在第四栏目，评判的规则在第五栏目。
6. 提交代码的编译器为 C++ 14 - MinGW64 ，如果你无法编译给定的代码，说明你得换编译器了。
7. 提交不保证成功。请自行测试成功之后，方可安心。


## 二 题目

1. 认识Github - 拥有自己的代码仓库
2. 使用git    - 把代码托管给github
3. C++		 -  什么是容器？
4. C++ 14    -  C++ 古老？ 如何更现代化 

## 三 参考教程

### 1. 认识GitHub 

Github 是一个好朋友，你会感谢，你这么早就认识了这位朋友，当然，你是coder的话。
Github 是一个基于 git 的代码托管平台，付费用户可以建私人仓库，我们一般的免费用户只能使用公共仓库，也就是代码要公开。
Github 由Chris Wanstrath, PJ Hyett 与Tom Preston-Werner三位开发者在2008年4月创办。迄今拥有59名全职员工，主要提供基于git的版本托管服务。
一个拥有143万开发者的社区。其中不乏Linux发明者Torvalds这样的顶级黑客，以及Rails创始人DHH这样的年轻极客。
这个星球上最流行的开源托管服务。目前已托管431万git项目。

更多详情，咨询百度

我们为什么要使用GitHub ？ 自行体会 。

[github 官网](https://github.com)
要想使用github第一步当然是注册github账号了，当一切妥当 登陆GitHub.

![](http://onh0umlhz.bkt.clouddn.com/20171013001.JPG)

在GitHub 最上方有一个搜索框 ，可以搜索所有的开源项目 
右上角有一个加号和一个头像 ，加号下面，我们可以新建一个仓库，
用来在GitHub上面存储我们的项目内容。
点击new repositories 新建一个新仓库。输入项目名就可以直接Create了。
![](http://onh0umlhz.bkt.clouddn.com/20171013004.JPG)

怎么理解这个仓库？好比一个远程的电脑 ，你在本地写的所有文档，代码，资源都可以上传到这个仓库。
他替你保管并且用了一些技术手段对其进行控制。
![](http://onh0umlhz.bkt.clouddn.com/20171013005.JPG)

此时，在github就有了一个仓库，要想使用这个仓库，就要把自己电脑的东西存放进去，就要上传你的文件，而要两者通信，必须要有一份协议，就是让你的电脑和G的itHub电脑签一份协议，用来传递文件 。这个协议叫做ssh 。

管理ssh的工具，暂且就叫他git吧 

[ 下载 git ](https://git-for-windows.github.io)
git和github是两个不一样的东西 , git是一个控制器 ，github是一个平台 我们使用git来对电脑与GitHub进行控制 。

### 2. git教程 

![](https://timgsa.baidu.com/timg?image&quality=80&size=b10000_10000&sec=1507906959&di=b999dd0454f494f11fff5d9c5172ee56&src=http://www.treelib.com/Uploads/Home/Ucenter/save_editor_image/2014-12-20/54945a1bde216.png)

下载安装结束之后，桌面右击菜单，会出现git gui 和 git bash 两个选项。
我们先选择第二项。打开之后类似cmd的命令输入框，我们的骚操作开始了。

用自己的邮箱号创立一个ssh协议。

``` cpp
 ssh-keygen -t rsa -C "your_email@youremail.com"
```
后面的 your_email@youremail.com 改为你在github上注册的邮箱

![](http://onh0umlhz.bkt.clouddn.com/20171013002.JPG)
之后会要求确认路径和输入密码，我们这使用默认的一路回车就行。成功的话会在~/下生成.ssh文件夹（可能是隐藏文件，如何显示它呢？），点进去，打开id_rsa.pub （pub格式是啥? 怎么打开啊？），复制里面的key。

回到github上，进入 Account Settings（账户配置），左边选择SSH Keys，Add SSH Key,title随便填，粘贴在你电脑上生成的key。

![](http://www.runoob.com/wp-content/uploads/2014/05/github-account.jpg)

然后保存 ，回到git客户端 ，我们来验证是否成功 。

``` cpp
 ssh -T git@github.com
``` 
如果是第一次的会提示是否continue，输入yes就会看到
![](http://onh0umlhz.bkt.clouddn.com/20171013003.JPG)

如果是这样，说明成功了 这就表示已成功连上github。
接下来我们要做的就是把本地仓库传到github上去，在此之前还需要设置username和email，因为github每次commit都会记录他们

``` cpp
    git config --global user.name "your name"
    git config --global user.email "your_email@youremail.com"
```
键入上述信息之后，git就保存了我们的信息，就可以先关掉他了 。

### 3. C++的容器

### 4. C++ 14 简单的语法  

## 四 提交方式

## 五 评判规则

