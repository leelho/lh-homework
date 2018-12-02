// mainc.c
// snake
// Created by lh on 18.11.30
//

#include<stdio.h>
#include<stdlib.h>

#define Snake_max_length 20 //初始化基本量 
#define Snake_head 'H'
#define Snake_body 'X'
#define Blank_cell ' '
#define Snake_food '$'
#define Wall_cell '*'



char map[13][13]={"************",  //初始化地图 
                  "*XXXXH     *",
                  "*          *",  
				  "*          *",
				  "*          *",
				  "*          *",
				  "*          *",
				  "*          *",
				  "*          *",
				  "*          *",
				  "*          *",
				  "************"};
int snakex[Snake_max_length]={1,2,3,4,5}; //初始化蛇的参数 
int snakey[Snake_max_length]={1,1,1,1,1};
int snakelength=5; 
int flag=0;   //这个flag判断蛇头是否碰到蛇身 

void snakemove(char);  //各种细分函数声明 
void putfood(void);
void output(void);
void gameover(void);


int main ()
{   
    char ch;
	output();  //第一次打印地图 
	while (snakex[snakelength-1]!=0&&snakex[snakelength-1]!=12&&snakey[snakelength-1]!=0&&snakey[snakelength-1]!=12) //限定蛇头不可以碰到边界 
	  {
	     scanf("%c",&ch);  //输入操作 
	     if (ch!='\n')    //一次debug的操作，防止ch==\n; 
		 {
	     snakemove(ch);   //蛇移动 
	     if (flag)        //判断蛇是否碰到蛇身 
	     break;
	     if (snakex[snakelength-1]!=0&&snakex[snakelength-1]!=12&&snakey[snakelength-1]!=0&&snakey[snakelength-1]!=12) //限定蛇头不可以碰到边界 
	     output();   //打印地图 
	     }
	  }
	gameover();    //显示失败 
	
} 
void snakemove(char ch){
	  int i;
      int sizex[Snake_max_length]={1,2,3,4,5};
      int sizey[Snake_max_length]={1,1,1,1,1};   //再次声明一个数组 
      for (int i=snakelength-1;i>=1;i--)
	  {
	  	sizex[i]=snakex[i];    //使用该数组来存储蛇的位置 
	  	sizey[i]=snakey[i];
	  }
	  
	 for (int i=snakelength-1;i>=1;i--)
	  {
	  	snakex[i-1]=sizex[i];
	  	snakey[i-1]=sizey[i];   //将每一个蛇身的位置声明给后一个蛇位置，蛇头给第一个蛇身，以此类推，将蛇的位置前进一个 
	  }
	  switch (ch)
     {
     	case 'w': snakey[snakelength-1]--;break;
     	case 's': snakey[snakelength-1]++;break;
     	case 'a': snakex[snakelength-1]--;break;
     	case 'd': snakex[snakelength-1]++;break;    //蛇头位置改变 
	 }
	 for (int j=snakelength-1,i=snakelength-2;i>=0;i--)
	  if (snakex[j]==snakex[i]&&snakey[j]==snakey[i])  //判断蛇头是否碰到蛇身 
	    flag=1;
	 
}
void output(void)
{    
    int i,j; 
    for (int i=1;i<=10;i++)     //将地图中间部分全部涂为空白 
     for (int j=1;j<=10;j++)
       map[i][j]=' ';     
	for (i=0;i<snakelength;i++)
	{
	   if (i==snakelength-1)
	    map[snakey[i]][snakex[i]]='H';   //定义蛇的位置 
	   else 
	    map[snakey[i]][snakex[i]]='X';
	    
	}
	for (i=0;i<12;i++)
	  for (j=0;j<12;j++)
	  {
	  	if (j==11)
	  	printf("%c\n",map[i][j]);     //打印地图 
	  	else 
	  	printf("%c",map[i][j]);
	  }
	  
	  
}
void gameover(void)     
{   
     int i,j;
	for (int i=0;i<=11;i++)         //声明地图边界，并将地图中间涂为空白 
     for (int j=0;j<=11;j++)
       {
       	if (i==0||j==0||i==11||j==11)
	        map[i][j]='*';
	   else map[i][j]=' ';
	   }
    map[3][5]='G';map[3][6]='A';     //将部分位置定义为gameover 
    map[4][5]='M';map[4][6]='E';
    map[7][5]='O';map[7][6]='V';
    map[8][5]='E';map[8][6]='R';
   for (i=0;i<12;i++)
	  for (j=0;j<12;j++)
	  {
	  	if (j==11)
	  	printf("%c\n",map[i][j]);   //打印 
	  	else 
	  	printf("%c",map[i][j]);
	  }	
    
	
}