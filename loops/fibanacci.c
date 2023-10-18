#include <stdio.h>

int main()
{
    int i,number,n1=0,n2=1,n3;
    
    printf(" enter number:");

    scanf("%d", &number);
    
    printf( "%d %d",n1,n2);
    
    for(i=1; i<number;i++){
        n3 = n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    printf("\n");
    return 0;
}

