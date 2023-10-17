#include <stdio.h>

int main()
{
    int a;
    int n;
    
    printf("enter the value of a:\n");
    
    scanf("%d", &a);
    
    printf("enter the bit possition n \n");
    
    scanf("%d", &n);
    
    printf("right side:%d\n",a>>n);
    
    printf("left side:%d\n",a<<n);

    return 0;
}


