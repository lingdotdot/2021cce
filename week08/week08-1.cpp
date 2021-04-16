#include <stdio.h>
char line[100][10];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", line[i]);
    }
    for(int i=0;i<n; i++){
        printf("%s\n", line[i]);
    }
}
