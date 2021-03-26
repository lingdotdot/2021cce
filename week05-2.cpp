#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\o'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]={'m', 'a','j','o','r','i','t','y'};
    printf("%s\n", line3);
}
