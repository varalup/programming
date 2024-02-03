#include <stdio.h>

int main()
{
    int number;
    
    printf("enter the number:\n");
    
    scanf("%d", &number);
    
    if(number > 0){
        printf("The positive number \n");
    }
    else if(number < 0){
        
        printf("The negative number \n");
    }
    
    else if(number == 0){
        printf("The zero number\n");
    }
    return 0;
}

