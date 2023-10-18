#include <stdio.h>
int main()
{
	int a = 10, b = 20, c =-5,d;
	printf("%d\n", d= (a<b) && (a<c));
        printf("%d\n", d= (a>b) && (a>c));
	
	printf("%d\n", d = (a=b) || (b=c));
           
           printf("%d\n", d = (b=c) || (c=a));
           
           printf("%d\n",d = (b=c)&& (c=a) && (a=b));
           
           printf("%d\n",d = (b=c)|| (c=a) || (a=b));
           
            printf("%d\n",d = (b=c)&& (c=a) || (a=b));
            
             printf("%d\n",d = (b=c)&& (c=a) && (a=b));

           printf("%d\n",d = (b=c)|| (c=a) && (a=b));

return 0;

}














