# <center> python 编程实验报告</center>    

##  利用python解决高数问题  

### $\int \frac {3x}{(x^2+1)^2}dx$   

python代码如下  
``` 
   python 
   >>> import sympy 
   >>> integrate (x*3/(x**2+1)**2,x)
   -3/(2*x**2 + 2)
```  

###  $\lim\limits_{x\to0} \frac {\sqrt{x+1}-sqrt{1-x}}{x}$       

python代码如下  
```
   python
   >>> import sympy 
   >>> limit (( sqrt(1+x)-sqrt(1-x))/(x),x,0)  
   1
``` 

## 用python解决线性代数问题 

###  已知
$$
\left\{
\begin{matrix}
 1&2&3\\
 4&5&6\\
 7&8&9
 \end{matrix}
 \right\}\tag{1}
 $$ 
### *求矩阵（1）的逆\*

python代码如下
```
    python
    >>> from numpy import *
    >>> import numpy 
    >>> a1=mat ([[1,2,3],[4,5,6],[7,8,9]])
    >>> a1.T 
    matrix([[1, 4, 7],
        [2, 5, 8],
        [3, 6, 9]])
```

### 已知 
$$
\left\{
\begin{matrix}
1&1\\
2&2\\
3&3
\end{matrix}
\right\}\tag{2}
$$

### 求（1）（2）两个矩阵的矩阵乘积  
python代码如下
```
  python
    >>> from numpy import *
    >>> import numpy 
    >>> a1=mat ([[1,2,3],[4,5,6],[7,8,9]])  
    >>> a2=mat([[1,1],[2,2],[3,3]])
    >>> a1*a2
     matrix([[14, 14],
        [32, 32],
        [50, 50]])
     




       
