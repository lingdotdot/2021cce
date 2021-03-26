# week05
#1
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);
}
```
#2
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]={'m', 'a','j','o','r','i','t','y'};
    printf("%s\n", line3);
}
```
#3
```C
#include <stdio.h.>
int main()
{
    char line[5][10]={"decline", "proper", "majority", "bullet", "shop"};

    for(int i=0; i<5; i++){
        printf("%s\n", line[i]);
    }
}
```
#4
```C
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d", '\0');
}
```
