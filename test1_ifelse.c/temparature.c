#include <stdio.h>

int main()
{
    
    float celsius,fahrenheit;
    int n;
    printf("Enter 1 for converting celsius to fahrenheit :\n");
    printf("Enter 2 for converting fahrenheit to celsius : \n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Enter celsius :");
            scanf("%f",&celsius);
            fahrenheit = celsius* 9/5 +32;
             printf("fahrenheit = %f\n",fahrenheit);
             break;
        case 2 :
             printf("Enter fahrenheit :");
            scanf("%f",&fahrenheit);
            celsius = (fahrenheit - 32) * 5/9;
            printf("celsius = %f\n",celsius);
             break;
             
        default :
            printf("Enter either 1 or 2\n");
            break;
    }
   

    return 0;
}

