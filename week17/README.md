#step01_利用String line宣告一個字串變數,變數可以變動,所以在程式很重要, 再用text()畫出字
```C
void setup(){//設定，只做一次
  size(400,200);
  textSize(40);
}
String line="World";
void draw(){//每秒60次
   background(0);
   text("hello", 100,100);
   text(line,100,150);
}
```
#step01-2利用字串的+可以把2個字串接起來變比較長的字串,同時在mousePressed()裡,line=line+新的字母,也能變長
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q, 100,100);
  text("You:"+line, 100,150);
}
void mousePressed(){
   line =line+"a";
}
```
#step02-1延序前一步驟,但把mousePressed()改成keyPressed(), 同時 line = line + key; 讓按的字母可以變長
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q, 100,100);
  text("You:"+line, 100,150);
}
void keyPressed(){//點一次做程序一次
   line =line+key;//key是按下去按鍵，可以打字
}
```
#
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:  "+Q, 100,100);
  text("You:"+line, 100,150);
}
void keyPressed(){//點一次做程序一次，小心有時打到
//看不到的符號
   int len =line.length();
   if(key>='a'&& key<='z')line=line+key;//小寫鍵
   if(key>='A'&& key<='Z')line=line+key;//大寫鍵
   if(key== BACKSPACE ) line=line.substring(0,len-1);
}
```
