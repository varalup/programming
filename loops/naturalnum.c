#include <stdio.h>

int main()
{
    int i , numbers;
    
    printf("Enter a numbers:");
    
    scanf("%d", &numbers);
    
    for(i=1; i<=numbers;i++)
    {
        printf("%d\n",i);
    }

    return 0;
}

