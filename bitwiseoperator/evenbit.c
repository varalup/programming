#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a:\n");
    
    scanf("%d", &a);
    
    printf("a value even=0,odd = 1:%d\n",a&1);

    return 0;
}

