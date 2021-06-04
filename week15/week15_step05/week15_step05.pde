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
