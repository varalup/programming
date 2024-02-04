#include <stdio.h>

int main()
{
    int i,count=0,n;
    
    printf("enter the any number ");
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count == 2)
    {
        printf("\n it is prime  number");
    }
else
printf("it not a prime number");
    return 0;
}

