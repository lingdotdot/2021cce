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
