#include <stdio.h>

int main()
{
    int r,sum=0,n;
    
    printf("enter the sum of digits:");
    scanf("%d",&n);
    
    for(;n>0;){
        
        r=n%10;
        
        sum=sum+r;
        n=n/10;
    }
printf("%d",sum);

    return 0;
}
