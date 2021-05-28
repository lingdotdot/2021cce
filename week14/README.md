# week14 製作一個轉盤抽籤互動程式
# 01 寫一個程式取出一個60以內的有小數點的亂碼
```C
void setup(){
  size( 300,200);
  float ans= random(60);
  textSize(30);
  text(ans,0,30);
}
```
