# <center> “自顶向下，逐步求精”的编程方法</center>       

##  Top-Down Design  
> A top-down approach (also known as stepwise design and in some cases used as a synonym of decomposition) is essentially the breaking down of a system to gain insight into its compositional sub-systems in a reverse engineering fashion. In a top-down approach an overview of the system is formulated, specifying, but not detailing, any first-level subsystems. Each subsystem is then refined in yet greater detail, sometimes in many additional subsystem levels, until the entire specification is reduced to base elements. A top-down model is often specified with the assistance of "black boxes", which makes it easier to manipulate. However, black boxes may fail to clarify elementary mechanisms or be detailed enough to realistically validate the model. Top down approach starts with the big picture. It breaks down from there into smaller segments.       


*也就是将一个项目进行分解，再对每一个部分进行细化处理，从而得出一个结果*

## 洗衣机案例   

### *比如对洗衣机流程的分析，我们可以将其分为几个部分：*  
1）注水， 水位计计水位    
2）浸泡， 计时器计时    
3）电机转动, 左3次，右3次   
4）排水， 水位计计水位  
5）电机转动（脱水）     
6）结束    

### *然后我们再对其中的每一个部分进行处理解释这样就可以将一个大项目进行划分可以提高工作效率。比如我们就可以将注水交个一个函数进行处理，再将浸泡交由另一个函数。最终就可以得到许多函数，最后我们再将他们在主函数进行调用，这样就可以节省时间。而且在后续的改动中，有目的性的针对某一个函数进行改动即可。*   

## 谢谢
  

