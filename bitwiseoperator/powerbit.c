#include <stdio.h>

int main()
{
    int a;
   
    
    printf("enter the value of a:\n");
    
    scanf("%d", &a);
    
    printf("0 is power 2, 1 is not power 2:%d\n",a & 1);

    return 0;
}


