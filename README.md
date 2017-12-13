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
6. 提交代码的编译器为 C++ 11 - MinGW64 ，如果你无法编译给定的代码，说明你得换编译器了。
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


### 3. github实践 
![](http://onh0umlhz.bkt.clouddn.com/20171013005.JPG)
如图，就是你所创建的仓库了 。我们简单的看一下这个仓库 。
最上面miccall是我的用户名 斜杠后面就是这个仓库的名字 。右边 有三个框 watch star fork 分别代表关注，赞赏 ，和分支。
前两个基本不用解释，第三个fork要说一下，就是可以把别人的仓库，分一个枝到自己的仓库，有点类似于拷贝。这样理解还不是他的全部，慢慢使用中再去细化理解吧。

commit是提交次数 ，branch是你的仓库有几个不同的版本 release是你代码所编译之后，可以使用的文件。
branch和fork不同 branch是自己的分支，代表开发版本，测试版本，等等什么自定义的版本分支。fork是别人复制你的分支。他已经不属于自己控制了。

最显眼的还是那个大块的绿色按钮了 Clone and Download 。他可以把整个仓库下载到自己的电脑 。可以用浏览器自己下载，也可以使用git工具下载 。 

好了 github就介绍到这里 ，我们回到电脑 ，在你需要上传到github的文件夹，右键 打开 bash 。
后面的yourName和yourRepo表示你再github的用户名和刚才新建的仓库。

``` git
	git init 
	git remote add origin git@github.com:yourName/yourRepo.git
``` 
好了 ，如果没有错误信息，我们就成功把这个目录和github的仓库链接到一起了 。下面我们就可以在该目录创建文件了 。
创建完之后。
``` git
	git pull origin master
	git add * 
```
这两句的意思就是 ，先把仓库里面的东西pull到该本地目录，然后把本地目录里面所有的文件全部添加，添加到哪里呢？不是仓库里面，这个等一会解释。
然后 

``` git
	git commit -m "提交信息"
```
这一句是提交命令 相当于已经准备好了，完事具备了 。

``` git
	git push origin master
```
![](http://onh0umlhz.bkt.clouddn.com/20171013006.JPG)

做完这一步，就会发现 ，github的仓库里面，就已经有了我们本地的文件了。这样，我们就把我们的项目托管到github上面了 。

小结

本地仓库由 git 维护的三棵"树"组成。第一个是你的 工作目录，它持有实际文件；
第二个是 暂存区（Index），它像个缓存区域，临时保存你的改动；
最后是 HEAD，它指向你最后一次提交的结果。
![](http://www.runoob.com/wp-content/uploads/2014/05/trees.png)
当我们使用add命令时，就是把工作目录的内容 添加到index区，
使用commit命令时，又把内容放到head区 。
最后push命令，把head区的内容，上传到仓库 。

可以把 master 换成你想要推送的任何分支。master时默认分支。

重新认识软件开发 

#### 1.分支 branch 
分支是用来将特性开发绝缘开来的。在你创建仓库的时候，master 是"默认的"分支。在其他分支上进行开发，完成后再将它们合并到主分支上。

![](http://www.runoob.com/wp-content/uploads/2014/05/branches.png)

``` git

	创建一个叫做"feature_x"的分支，并切换过去：
	git checkout -b feature_x
	切换回主分支：
	git checkout master
	再把新建的分支删掉：
	git branch -d feature_x
	除非你将分支推送到远端仓库，不然该分支就是 不为他人所见的：
	git push origin <branch>

```

#### 2.更新与合并

``` git
	
	要更新你的本地仓库至最新改动，执行：
	git pull
	以在你的工作目录中 获取（fetch） 并 合并（merge） 远端的改动。
	要合并其他分支到你的当前分支（例如 master），执行：
	git merge <branch>
	在这两种情况下，git 都会尝试去自动合并改动。
	遗憾的是，这可能并非每次都成功，并可能出现冲突（conflicts）。 
	这时候就需要你修改这些文件来手动合并这些冲突（conflicts）。
	改完之后，你需要执行如下命令以将它们标记为合并成功：
	git add <filename>
	在合并改动之前，你可以使用如下命令预览差异：
	git diff <source_branch> <target_branch>

```
#### 3.替换本地改动

``` git
	
	假如你操作失误（当然，这最好永远不要发生），你可以使用如下命令替换掉本地改动：
	git checkout -- <filename>
	此命令会使用 HEAD 中的最新内容替换掉你的工作目录中的文件。已添加到暂存区的改动以及新文件都不会受到影响。
	假如你想丢弃你在本地的所有改动与提交，可以到服务器上获取最新的版本历史，并将你本地主分支指向它：
	git fetch origin
	git reset --hard origin/master

```

#### 4.多人协作

``` git
	首先将项目库forl到自己的目录下，
	然后从git服务器上克隆到本地。giturl为开发项目的链接
	git clone giturl.git
	克隆到本地之后，就可以常规开发了 。
	开发结束之后，重新上传 。
	git remote origin
	git push origin master
```

上传结束后，需要发送请求向管理者合并测试没有问题的代码，完成总的代码的合并。首先pull request，添加修改标题和修改内容，点击创建，完成申请。
在项目的右边有一个Pull requests 的选项，点击这里就会给主仓库发一个request，主仓库维护人员就会对你提交上来的代码进行review 并合并。

![](http://onh0umlhz.bkt.clouddn.com/20171013007.JPG)

#### 5.再一次理解分支

如果我们的项目本身比较简单，只需要有主分支master就够了。
但是，实际上并不是这样的。
在这个世界上，有一种软件叫做开源软件 -- 源代码开发，所有的人都可以免费使用。
开源软件是由世界上无数的程序员共同来开发。
每个程序员都可以创建一个自己的分支，这个自己分支和主master完全独立的两个分支。
相应的，每个程序员都可以拥有自己的分支，可以进行任何的开发，此时和master没有什么关系的。
一旦开发完毕，就可以将你的分支合并到主分支上去。
什么时候会用到分支呢？
假设你准备开发一个新功能，但是需要两周才能完成，第一周你写了50%的代码，如果立刻提交，由于代码还没写完，不完整的代码库会导致别人不能干活了。如果等代码全部写完再一次提交，又存在丢失每天进度的巨大风险，怎么办？
你可以创建一个属于自己的分支，别人看不见，还继续在原来的分支上工作，而你在自己的分支上进行开发，等开发完毕，合并即可。
分支的基本操作

基本操作有如下几个：
1. 查看当前分支 （git branch）
2. 创建分支 （git branch 分支名）
3.切换分支（git checkout 分支名）
4.分支上的常规操作
5.分支的合并 （git checkout master + git merge 分支名）
6.分支的删除（git branch -d 分支名）
查看当前分支 （git branch）

### 4. C++的容器
(不知道 C++ ？C++ 不熟？ 花一个小时赶紧快速入个门呗 ？)
(C++ 大牛？ 你好 ，出门左转研发部 )

仔细阅读test01.cpp文件 ，并按要求完成任务。

做完本题就可以提交了，提交方法看下面。

### 5. C++ 14 简单的语法  

(相信前面的难关你已经度过了，下面来一点小玩具)

auto 关键字 

auto可以在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型。

``` cpp
 	int a = 10;
    auto au_a = a; //自动类型推断，au_a为int类型
    cout << typeid(au_a).name() << endl;  //typeid运算符可以输出变量的类型。
```
上面举的这个例子很简单，在真正编程的时候也不建议这样来使用auto，直接写出变量的类型更加清晰易懂。
下面列举auto关键字的正确用法。


想象一下在没有auto的时候，我们操作标准库时经常需要这样：

``` cpp

    std::vector<std::string> vs;
    for (std::vector<std::string>::iterator i = vs.begin(); i != vs.end(); i++)
    {
        //... 你甚至不知道 
        //std::map<std::string,std::string>::iterator
        //以及更长的变量类型
    }

```
auto 用于代替冗长复杂、变量使用范围专一的变量声明。

``` cpp
    
    std::vector<std::string> vs;
    for (auto i = vs.begin(); i != vs.end(); i++)
    {
        //..
    }

```
任务: 把第一次的作业加以优化。


## 四 提交方式

git仓库网址 ： 
https://github.com/miccall/JX_Final_Test 
一人创建一个自己的文件夹，把作业 pull Request 到该仓库

## 五 评判规则

提交成功  50+
第一题正确  80+ 
第二题正确  100 
