今天是2021-06-04
今天的上課內容是要寫出一個自動打鐘的程式
# 01 step01
```C
void setup(){//設定，只做一次
 size(400,200); 
 textSize(40);//字型大小
}
void draw(){//畫圖，每秒60次
  background(41,199,207);
  int s=second();//秒鐘
  text(s,100,100);
}
```
# 02 step02
```C
///秒數s:0,1,2,3,4...59
// 59,58,57...0(幫手)
//倒數:9,8,7...0
void setup(){
    size(400,200);
    textSize(40); 
}
void draw(){
    background(41,109,207);
    int s=second();
    //text(59-s,100,100);
    text(9-s%10, 100,100);  
}
//原:0,1,2,3,4,5,6,7,8,9
//到數:9,8,7,6,5,4,3,2,1,0
```
# 03 step3
```C
//要發出聲音，有點難度，要用外掛
//這裡叫PDE:Processing 
import processing.sound.*;
SoundFile player;//SoundFile是型狀，player是變數名
//tada.mp3檔，可以拉進來這裡
void setup(){
  size(400,200);
  player=new SoundFile(this , "tada.mp3");
}
void draw(){
    background(51,114,191);  
}
void  mousePressed(){
   player.play();
}  
```
# 04 step04
```C
//從第2步的程式開始增加!!!
import processing.sound.*;//step03的程式
SoundFile player;
void setup(){
    size(400,200);
    textSize(40); 
    player=new SoundFile(this, "tada.mp3");
}//step03程式，記得把tada.mp3放進來
void draw(){
    background(41,109,207);
    int s=second();
    //text(59-s,100,100);
    text(9-s%10, 100,100);  
    if(9-s%10 ==0)player.play();//step03的程式
}//0秒的時候，if()會進去60次，吵死了，一個問題!
```
# 05 step05
```C
//step03出發，做step05
import processing.sound.*;
SoundFile player;//SoundFile是型狀，player是變數名
//tada.mp3檔，可以拉進來這裡
void setup(){
  size(400,200);
  player=new SoundFile(this , "bell.mp3");
}//把bell.mp3放進來
void draw(){
    background(51,114,191);  
}
void  mousePressed(){//2種:play(),stop()
   if(player.isPlaying()){
      player.stop();
   }else{
   player.play();
   }
}  
```
# 06 Java & Javascript的差別 和 轉換
```C
///Java
void setup(){//設定，只做一次
 size(400,200); 
 textSize(40);//字型大小
}
void draw(){//畫圖，每秒60次
  background(41,199,207);
  int s=second();//秒鐘
  text(s,100,100);
}
```
```C
///轉換後
function setup(){//設定，只做一次
 createCanvas(400,200); 
 textSize(40);//字型大小
}
function draw(){//畫圖，每秒60次
  background(41,199,207);
  let s=second();//秒鐘
  text(s,100,100);
}

