#include <stdio.h>

int main()
{
    int a,b;
    
    printf("enter the values of a and b:");
    
    scanf("%d %d",&a,&b);
    
    if(a<b)
    printf("%d is less than %d\n",a,b);
    
    if(a<=b)
    printf("%d is less than or equal %d\n",a,b);
    
    if(a==b)
    printf("%d  equal %d\n",a,b);
    if(a!=b)
    printf("%d not equal %d\n",a,b);
    
    if(a>b)
    printf("%d is greater than   %d\n",a,b);
    
    if(a>=b)
    printf("%d is greater than or equal to  %d\n",a,b);
   
    return 0;
}







