#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[2000][80];
int compare(const void *p1, const void *p2)
{
    return strcmp((char*)p1, (char*)p2);
}
char trash[80];
int main()
{
    int n;
    scanf("%d"&n);

    for(int i=0; i<n; i++){
        scanf("%s", name[i])'
        gets(trash);
    }
    qsort(name,n,80, compare);

    for(int i=0; i<n; i++){
            printf("%s\n", name[i]);
    }
}
