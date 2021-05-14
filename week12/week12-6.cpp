#include <stdio.h>
int a[100];
int main()
{
    int N,M;
    while(scanf("%d %d", &N,&M)==2){
        for(int i=0;i<N;i++){
            scanf("%d", &a[i]);
        }

        printf("%d %d\n", N,M);
        for(int i=0;i<N;i++){
            printf("%d\n", a[i]);
        }
    }
}
