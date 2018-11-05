# <center> *虫子游戏大纲*</center>     
##  *游戏策划*  
### 楔子(Setting)  
>*随着科技的发展，人类的足迹逐渐遍布整个宇宙，在这样的时代。一个疯狂的科学家开始了对生物进化的研究。然而不料研究失败，整个研究基地变成废墟，科学家本人也不见踪影。只有传闻说那里时不时有恐怖的嚎叫，而去探险的人都有去无回。在这种情况下，宇宙治安队派遣林克前去调查。*    
### 玩法(Gameplay)  
> *使用上下左右方向键进行移动，使用鼠标左键发射子弹，每个虫子有5滴血，子弹命中敌人可以使其掉一滴血。*   

### 人设与道具（Game Sprites）：    
> * player: 林克。身手敏捷，勇猛，使用一把小手枪，足以对抗整个虫群。   


> * boss：博士。一个疯狂的科学家，他生前非常聪明，最终使自己变成了一个巨大的虫子。

> * enemy: 虫子：由博士产下的卵孵化而成，会直接向敌人冲来，虽然智商低下，但是非常危险，一击就可以秒杀敌人。    
 
> * 子弹：主角的手枪发射的危险品。

> * 爆炸：子弹发射时和射击到敌人的爆炸。  

>*  backgroud:某个不知名星球，如今已经废弃。

>* 计分器：每次林克杀死虫子，就会加一分，杀死博士加5分

    
##  规则（rule）   
> *玩家只要通过自己的操作将虫子全部消灭，即为胜利。*    

## *游戏开发小结*      

  |objiect|林克|
  |--|--|
  |Attribute|photo|
  |Collaborator|sprite|
  | Events & Actions|移动&发射子弹。|    

  
  |objiect|子弹|
  |--|--|
  |Attribute|图片|
  |Collaborator|精灵|
  | Events & Actions|碰撞&销毁自己|    

  
  |objiect|博士|
  |--|--|
  |Attribute|图片|
  |Collaborator|精灵|
  | Events & Actions|移动，寻找林克，碰撞，产卵&杀死林克|    

  
  |objiect|虫子|
  |--|--|
  |Attribute|图片|
  |Collaborator|精灵|
  | Events & Actions|移动，寻找林克，碰撞&杀死林克|    

  
  |objiect|爆炸|
  |--|--|
  |Attribute|图片|
  |Collaborator|精灵|
  | Events & Actions|渐变式出现&消失|    

  
  |objiect|背景|
  |--|--|
  |Attribute|图片|
  |Collaborator|背景|
  | Events & Actions|无|    

  
  |objiect|计分器|
  |--|--|
  |Attribute|文本|
  |Collaborator|文本|
  | Events & Actions|加分|    

## 游戏界面展示   

![](http://a3.qpic.cn/psb?/V10EObJi22LuSA/*FDZaBx*x6Bxzs.A*sMtlnD9t4FPxPEs6BLdYwBUuaQ!/m/dFIBAAAAAAAAnull&bo=gAc4BAAAAAADB5k!&rf=photolist&t=5)  
## 游戏部分展示   

  ![](http://m.qpic.cn/psb?/V10EObJi22LuSA/IsOySFsye1iyN2OohkZAX8mkxUxoHp08T507Pkk2iOo!/b/dDUBAAAAAAAA&bo=CwJQAQAAAAACdws!&rf=viewer_4)    
  # <center> *谢谢！！*</center>  


