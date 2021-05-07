# 01 練習qsort程式。
```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void *p1, const void *p2)
{
        int d1=*(int *)p1;
        int d2=*(int *)p2;
        if(d1>d2)return 1;
        if(d1==d2)return 0;
        if(d1<d2)return -1;
}
int main()
{
    qsort (a,10,sizeof(int), compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
```
# 02 10420 CPE練習，考試題目練習。
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
char others[80];
int compare (const void *p1, const void *p2){
	char *s1=(char *)p1;
	char *s2=(char *)p2;

	int result =strcmp(s1,s2);
	if(result>0) return 1;
	if(result==0) return 0;
	if(result<0) return -1;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", line[i]);
		gets(others);
	}
	qsort(line,n,80,compare);

	printf("%s ", line[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
		if(strcmp(line[i], line[i+1])==0){
			ans++;
		}
		else {
			printf("%d\n", ans);
			printf("%s ", line[i+1]);
			ans=1;
		}


	}

	printf("%d\n",ans);
}
```
# 03 複習struct
```C
#include <stdio.h>
struct data{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n", box.c,box.ans);
}
```
# 04 複習struct DATA
```C
#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n", box.c,box.ans);
}
```
# 05 CPE 10062 step 1
```C
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
	for(int t=0; gets (line); t++){
	if(t>0)printf("\n");
	printf("blah\n");
	printf("blah\n");
	


}
}
```
# 06 CPE 10062 step 2
```C
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{

    for(int t=0;gets(line);t++){
        for(int i=0;i<256; i++) ans[i]=0;

        for(int i=0; line[i]!=0; i++){
            char c=line[i];
            ans[c]++;
        }

        if(t>0) printf("\n");
        for(int i=0;i<256;i++){
            if(ans[i]>0)printf("%d %d\n", i,ans[i]);
        }
    }
}
```
