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
int degree=0
void draw(){
   background(57,255,127);
   float stop=radians(degree);
   text(degree,200,100);
   text(stop,200,150);
   arc(100,100,180,180,0,stop);
   if(mousePressed)degree++;
}
```
第二版
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
void draw(){
  background(57,255,127);
  arc(100,100,180,180, radians(90), radians(180));
}
```
Step 04 讓轉盤有角度的自動轉起來，每秒轉動60度
```C 
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0;
void draw(){
  background(57,255,127);
  //float start =radians(90+mouseX);
  //float stop =radians(180+mouseX);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180, start, stop);
  shift+=1;
}
```
Step 05 改程式碼，讓轉盤越來越慢的停住並有速度的倒數
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=10;//global變數
void draw(){
  background(57,255,127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180, start, stop);
  if(v>0.0001){//還有速度時，就轉動
  shift+=v;//轉動的速度
  v=v*0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
Step 06 產生亂碼，轉盤任意亂碼並轉動
```C
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=0;//global變數
void mousePressed(){
  v=random(10)+5;
}
void draw(){
  background(57,255,127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180, start, stop);
  if(v>0.1){//還有速度時，就轉動
  shift+=v;//轉動的速度
  v=v*0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
Step 07 轉盤上有顏色差別
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=0;//global變數
void mousePressed(){
  v=random(10)+5;
}
void draw(){
  background(57,255,127);
  for(int i=0;i<24;i++){
  if(i%3==0)fill(0);
  if(i%3==1)fill(255);
  if(i%3==2)fill(200,180,0);
  float start=radians(0+shift+i*360/24);
  float stop=radians(360/24+shift+i*360/24);
  arc(100,100,180,180, start, stop);
  }
  if(v>0.1){//還有速度時，就轉動
  shift+=v;//轉動的速度
  v=v*0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
