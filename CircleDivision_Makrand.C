#include <stdio.h>
int fact(int n);
int main(void) {
    int n=0;int output=0;
    scanf("%d",&n);
    output= 1 + fact(n)/(fact(n-2)*2) +fact(n)/(fact(n-4)*24);
    printf("%d",output);
    return 0;
}
int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}
