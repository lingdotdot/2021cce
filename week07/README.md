# 1 
下載c tutor
# 2
字串順序比第五週更好的程式
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];

int compare(const void *p1, const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);

}
int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%s", line[i]);
	}
	qsort(line, n,10, compare);
	
	for(int i=0; i<n; i++){
		printf("%s\n", line[i]);
	
	}
}
```
# 3
結合c tutor
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    
    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}
    
    qsort( line, n, sizeof(char[10]), compare);
    
    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}
```
# 4 
CPE List of Conquests 10420
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char other[100];
int compare(const void *p1, const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);

}
int main()
{
	int ans=1;
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%s", line[i]);
		gets(other);
	}
	qsort(line, n,10, compare);

	for(int i=0; i<n; i++){
		if(strcmp(line[i], line[i+1]) ==0){
			ans++;
		}
		else {
			printf("%s %d\n", line[i], ans);
			ans=1;
		}
	}
}
```
