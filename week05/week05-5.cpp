#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="hello";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("¥ªÃä¤j\n");
    }
    else{
        printf("¥kÃä¤j\n");
    }
}
