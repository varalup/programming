#include <stdio.h>

int main()
{
    int amount;
    
    printf("enter the amount:\n");
    
    scanf("%d", &amount);
    
    if(amount > 100){
        printf("icici \n");
    }
    else if(amount > 80 && amount <100){
        
        printf(" hdfc \n");
    }
    
    else if(amount >60 && amount < 80){
        printf("axis\n");
    } else
    printf("sbi\n");

    return 0;
}
