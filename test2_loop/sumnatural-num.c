#include <stdio.h>

int main()
{
    int i,sum=0,n;
    printf("enter the values:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       
        
        sum=sum+i;
    }
    printf("The sum of the first 10 natural numbers is %d\n",sum);

    return 0;
}
