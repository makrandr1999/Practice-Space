#include <stdio.h>

int main(void) {
int a,b,c,d=0;
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a==b && c==d )|| (a==c && b==d) || (a==d && b==c) )
   printf("YES");
else 
   printf("NO");
return 0;
} 
