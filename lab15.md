# <center> 智能蛇实验报告</center>   

## 游戏设计准备 

> *本次智能蛇设计由于是要在linux平台上进行，所以一开始先要进行一些准备工作。本人是在网上找了一些大佬的教程来进行。首先下载了一个虚拟机软件**VBOX**。然后在网上找到了镜像，再安装。等安装结束，大致界面如下*

![](http://a2.qpic.cn/psb?/V10EObJi22LuSA/EjNtURyUkUPzYEYHC10Lfo8FxvwQQbiP4t7wAb5u1Ew!/c/dEkBAAAAAAAA&ek=1&kp=1&pt=0&bo=IgOyAgAAAAADJ5M!&tl=1&vuin=805283457&tm=1544360400&sce=60-2-2&rf=newphoto&t=5)   
> *然后再去下载一些编译器就可以开始愉悦地打代码了*

## 算法思想   

>由于已经做过了一个贪吃蛇的程序编写，这次智能蛇就大致是在那个基础上进行改造，需要多加一个**自动改变方向函数，并且改动一下主函数就行了**，所以这里就重点展示这些部分。

### 自动改变方向函数 

**伪代码**  
```
   // Hx,Hy: 头的位置
    // Fx,Fy：食物的位置
	function whereGoNext(Hx,Hy,Fx,Fy) {
	        // 用数组movable[3]={“a”,”d”,”w”,”s”} 记录可走的方向
	        // 用数组distance[3]={0,0,0,0} 记录离食物的距离
	        // 分别计算蛇头周边四个位置到食物的距离。H头的位置，F食物位置
	        //     例如：假设输入”a” 则distance[0] = |Fx – (Hx-1)| + |Fy – Hy|
	        //           如果 Hx-1，Hy 位置不是Blank，则 distance[0] = 9999
	        // 选择distance中存最小距离的下标p，注意最小距离不能是9999
	        // 返回 movable[p
    }
```
**函数实现**
```c
char whereGoNext(int hx,int hy,int fx,int fy )  //函数实现
{
	char move[]={'a','s','w','d'};  //定义一个字符数组储存各种方向
	int dist[4]={0};       //用一个数组储存改变后的距离
	
	
	dist[0]=abs(fx-(hx-1))+abs(fy-hy);   //通过绝对值进行计算
	dist[1]=abs(fx-hx)+abs(fy-(hy+1));
	dist[2]=abs(fx-hx)+abs(fy-(hy-1));
	dist[3]=abs(fx-(hx+1))+abs(fy-hy);
	
	if (map[hy][hx-1]=='*'||map[hy][hx-1]=='X')    //如果改变后的位置是墙或者蛇身就赋值为9999.即不让其自己碰壁
	 dist[0]=9999;
	if (map[hy+1][hx]=='*'||map[hy+1][hx]=='X')
	 dist[1]=9999;
	if (map[hy-1][hx]=='*'||map[hy-1][hx]=='X')
	 dist[2]=9999;
	if (map[hy][hx+1]=='*'||map[hy][hx+1]=='X')
	 dist[3]=9999;
	
	
	int min=dist[0];   //找出最小距离的移动方法
	int p=0;
	for (int i=1;i<4;i++)
	{
		if (min>dist[i])
		 {
		 	min = dist [i];
		 	p=i;
		 }
	}
	if (dist[p]==9999)   //如果最小距离是9999，代表怎么移动都是gameover
	 return 'w';
	else     //如果不是，就向最小距离移动
	return move[p];
}
```  

### 主函数 
**伪代码**  
```
输出字符矩阵
	WHILE not 游戏结束 DO
        wait(time)
		ch＝whereGoNext(Hx,Hy,Fx,Fy)
		CASE ch DO
		‘A’:左前进一步，break 
		‘D’:右前进一步，break    
		‘W’:上前进一步，break    
		‘S’:下前进一步，break    
		END CASE
		输出字符矩阵
	END WHILE
	输出 Game Over!!! 
```
**代码实现** 
```c
int main ()
{   
    char ch;
    putfood(); //第一次放置食物
	output();  //第一次打印地图 
	while (snakex[snakelength-1]!=0&&snakex[snakelength-1]!=12&&snakey[snakelength-1]!=0&&snakey[snakelength-1]!=12) //限定蛇头不可以碰到边界 
	  {
	     ch=whereGoNext(snakex[snakelength-1],snakey[snakelength-1],foodx,foody); //通过上面那个函数找到移动方向
		 
		 if (flag1)        //如果食物不存在就投放食物 
		 {putfood();flag1=0;} 
	     snakemove(ch);   //蛇移动 
	     if (flag)        //判断蛇是否碰到蛇身 
	     break;
	     if (snakex[snakelength-1]!=0&&snakex[snakelength-1]!=12&&snakey[snakelength-1]!=0&&snakey[snakelength-1]!=12) //限定蛇头不可以碰到边界 
	     output();   //打印地图 
	     
	  }
	gameover();    //显示失败 
	
} 
```

*以上就是对这个智能蛇的函数设计，下面是我的代码实现的结果* 
![](http://a3.qpic.cn/psb?/V10EObJi22LuSA/5BnVzpbAi4rE0tNmpNjdk9AwxbFZstar4e3ENBhetVo!/c/dFIBAAAAAAAA&ek=1&kp=1&pt=0&bo=xwR*AgAAAAADF4w!&tl=1&vuin=805283457&tm=1544364000&sce=60-2-2&rf=newphoto&t=5)

### 学习的领悟与感想
>*在写程序的时候无疑是非常头疼的，因为之前并没有写过一个这么复杂的程序。而且从内心也是对其比较排斥，因为觉得自己是没有这个能力。但是当我按照老师的办法，慢慢拆分函数一个个完成，最后看到那个蛇自己移动，是非常有成就感的！！！*         

>*在写程序过程中我觉得我是对函数有了更加清晰的认识，更加明白了拆分的重要性。同时也学会了关于对数组的使用，不仅仅是用来存储，也是可以用来不同的用处，可以使代码简化。*

