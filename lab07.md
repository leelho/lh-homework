# <center> 机器语言</center>  

## Program 1：Add 2 number  

###  1.PC，IR 寄存器的作用。   
 *PC是程序计数器，其是在程序执行时进行记录执行了几次程序。IR是指令寄存器，其可以将从内存读取指令然后进行储存。*  

 ### 2.ACC 寄存器的全称与作用。   

 *ACC寄存器全称是Accumulator,其作用就是将运算的一个数据存储在其中，方便下次使用*   
 ### 3.用“LOD #3”指令的执行过程，解释Fetch-Execute周期。  
 *先将内存中的指令读取出来存放在IR中，然后传指decoder进行译码然后到alu中执行一部分指令，接下来将3通过mcu传至alu再到ACC储存，最后再pc中加2*    
 ### 4.用“ADD W” 指令的执行过程，解释Fetch-Execute周期。    
 *先将内存中的指令读取出来存放在IR中，然后传指decoder进行译码，然后传至MCU，再将ACC中储存的3传至w的位置，最后pu中加2*   
 ### 5.“LOD #3” 与 “ADD W” 指令的执行在Fetch-Execute周期级别，有什么不同。    
 *LOD #3中需要取3传至ACC储存。*    

 ##  输入程序Program 2，运行并回答问题：   
 ### 用一句话总结程序的功能  
 *将x值一直递减*   
 ### 写出对应的 c 语言程序   

 ```c
    #include<stdio.h>

    int main ()
    {
        int x;
        for (x=-1;x!=0;x--)
        ;
        return 0;
    }
```
##  修改该程序，用机器语言实现 10+9+8+..1 ，输出结果存放于内存 Y    
```c
      #include<stdio.h>

      int main ()
   {
       int x,y,a=9;

       for (x=10;a>0;)
       {   
           x+=a;
           a--;
       }
       y=x;
       
       return 0;
   }
```
## 写出机器语言的计算过程  
![](http://m.qpic.cn/psb?/V10EObJi22LuSA/s22vL.u*qnoYvkbKLkcqLrmvetG3fV76Dbtk0EneTVk!/b/dDYBAAAAAAAA&bo=VQJrAQAAAAADFw8!&rf=viewer_4)
     
  |0|LOD #9|
  |--|--|
  |2|STO W|
  |4|LOD #10|
  |6|STO X|
  |8|ADD W|
  |10|STO X|
  |12|LOD W|
  |14|SUB #1|
  |16|STO W|
  |18|ADD X|
  |20|STO X|
  |22|JMZ 26|
  |24|JMP 12|
  |26|LOD X|
  |28|STO Y|
  |30|HTL|
 


## 用自己的语言，简单总结高级语言与机器语言的区别与联系。  
*机器语言操作要繁琐，需要先读取再赋值等等。联系在于其本质上的操作都是一样的只是实现的方式不同。* 