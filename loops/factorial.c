#include <stdio.h>

int main()
{
    int i , numbers,fact=1;
    
    printf("Enter the number in factorial:\n");
    
    scanf("%d", &numbers);
    
    for(i=1; i<=numbers;i++)
    {
        fact = fact*i;
    }
        printf("the result of factorial %d is  %d\n",numbers,fact);
    

    return 0;
}
