#include <stdio.h>
 
int main() 
{
    int testcase, count;
    scanf("%d",&testcase);
    for(count=0;count<testcase;count++)
    {
        int a,b,c,d;
        
        scanf("%d %d %d %d",&a, &b, &c, &d);
        if(a==b&&c==d)
        {
            printf("YES\n");
            continue;
        }
        if(a==c&&b==d)
        {
            printf("YES\n");
            continue;
        }
        if(a==d&&c==b)
        {
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
	return 0;
}
