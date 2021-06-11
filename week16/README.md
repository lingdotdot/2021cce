Step 01 畫出一個圓盤
```C
//第一步，畫出圓形
void setup(){//設定，只做一次
  size(400,200);  
}
void draw(){//畫，每秒60次
   background(57,255,127);//RGB三色
   ellipse(50,50,80,80);
   //畫圓  圓心 寬 高
 }
```
Step 02 利用Arc涵式劃出圓
```C
void setup(){
   size(400,200); 
}
void draw(){
  background(57,255,127);
  fill(255);  //白
  ellipse(100,100,180,180);
  fill(255,0,0);//紅
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
```
Step 03 做個小程式，搞懂圓周率和弧度
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
int degree=0;
void draw(){
   background(57,255,127);
   float stop=radians(degree);
   text(degree,200,100);
   text(stop,200,150);
   arc(100,100,180,180,0,stop);
   if(mousePressed)degree++;
}
```
