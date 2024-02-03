#include <stdio.h>

int main()
{
    
    int interest , principal, rate,  time ;
    
    printf("enter the interest of principal,rate,time:");
    
    scanf("%d %d %d",&principal,&rate,&time);
    
    interest = principal*time*rate/100;
    
    printf("%d ",interest);

    return 0;
}


