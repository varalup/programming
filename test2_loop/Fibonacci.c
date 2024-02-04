#include <stdio.h>

int main()
{
    int i,n,n1=0,n2=1,n3;
    
    n3=n1+n2;
    
    printf("enter the  number:");
    scanf("%d",&n);
    printf("Fibonacci Series:%d %d \n",n1,n2);
    for(i=3;i<=n;i++){
      printf("%d\n",n3);
     n1=n2;
    n2=n3;
    n3=n1+n2;
     
    }
  
    return 0;
}
