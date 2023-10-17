#include <stdio.h>

int main()
{
    int a;
    int n;
    
    printf("enter the value of a:\n");
    
    scanf("%d", &a);
    
    printf("enter the bit position n :\n");
    
    scanf("%d",&n);
    printf("bit clear:%d\n",a|(1<<n));

    return 0;
}

