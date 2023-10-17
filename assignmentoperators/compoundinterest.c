#include <stdio.h>

int main()
{
    int P,N,T;
    
    float A,R;
    
    printf(" Enter the P,N,T,R\n");
    
    scanf("%d %d %d %f",&P,&N,&T,&R);
    
    A = P*(1+R/N)*(N*T);
    
    printf("A = %f\n",A);

    return 0;
}

