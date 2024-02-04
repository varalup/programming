#include <stdio.h>

int main()
{
    int n=153 ; 
    
    int sum=0;
    
    int remain;
    
    int temp = n;
    
    for(;n>0;)
    {
   
    remain = n%10; 
    
     sum = sum + (remain *remain * remain);
     
     n = n/10; 
    }
    
    n = temp;
    
    
    if( n == sum)
    {
        printf("\n it is an armstrong ");
    } 
    else
    {
    printf("not an armstrong number");
    }
    

    return 0;
}


