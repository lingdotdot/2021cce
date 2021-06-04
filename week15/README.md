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
