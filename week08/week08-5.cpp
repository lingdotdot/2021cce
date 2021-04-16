#include <stdio.h>
#include <string.h>
char tree[1000000][32];
int compare(const void *p1, const void *p2){
    return strcm((char*)p1, (char*)p2);
}
int main()
{
    int T;
    scanf("%d\n\n", &T);

    int N=0;
    for(int i=0;   ;i++){
        cahr* now=gets(tree[i]);
        if(now ==NULL){
            N=i;
            break;
        }
        if(strcmp(tree[i],"")==0){
            N=i;
            break;
        }
    }
    qsort(tree, N, 32, compare);
    printf("%s ", tree[0]);
    int ans=1;
    for(int i=0; i<N; i++){
        if(strcmp(tree[i], tree[i+1])!=0){
            printf("%d\n", ans);
            printf("%s ", tree[i+1]);
            ans=1;
        }
        else ans++;
    }
    printf("$.4f\n", 100*ans/(float));
}
