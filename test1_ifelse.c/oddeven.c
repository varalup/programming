#include <stdio.h>

int main()
{
    int number;
    
    printf("enter the number:\n");
    
    scanf("%d", &number);
    
    if(number %2 ==0){
        printf("The given number is even\n");
    }
    else{
        printf("The given number is odd\n");
    }
    
    return 0;
}





