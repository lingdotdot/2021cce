如何做一個可以倒數計時的互動程式?
# step 01 把畫面大小設定好，並設定互動程式的背景顏色。
size(1024,400); //視窗大小
background(0,0,225); //背景顏色

# step 02 先做一個小小的互動程式
void setup(){ //設定
  size(1024, 400);
}
void draw(){
  if(mousePressed)background(15,162,249);
  else background(255,0,255);//按下滑鼠鍵，背景藍色變紫色
}

# step 03 加上數字互動
void setup(){
  size(1024, 400);
}
void draw(){
  if(mousePressed)background(15,162,249);
  else background(255,0,255);
  text(a,100,100); //變數a
}
int a=0;
void mousePressed(){
  a++; //如果按一次滑鼠鍵，變數a的數值增加1
}

# step 04 做一個可以連結現在時間的小時鐘。
void setup(){
   size(1024,400); 
}
void draw(){
   background(15,162,249);
   textSize(50);//字型大小
   int h=hour();//變數小時
   int m=minute();//變數分鐘
   int s=second();// 變數秒數
   text("Now:"+ h+":"+m+":"+s,100,100);//顯示的字串，now函式
}  
# step 05 倒數計時的時鐘，是現在時間減掉目標時間
，如果把時間都換成秒數程式會簡單很多。
void setup(){
   size(1024,400); 
   textFont(createFont("標楷體",50)); //因為預設字體是英文字體，所以一定中文字秀不出來，所以這邊換字體。
}
void draw(){
   background(15,162,249);
   textSize(50);
   int h=hour();
   int m=minute();
   int s=second();
   fill(255,0,0); //這邊是換顯示字的顏色
   text("Now:"+ h+":"+m+":"+s,100,100);
   int total=h*60*60+m*60+s;//這邊是在先算出總秒數
   text("總秒數:"+total, 100,200); //並設定字型大小，然後印出來。
}  
