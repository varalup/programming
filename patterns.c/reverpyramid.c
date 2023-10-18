#include <stdio.h>

int main()
{
    int space ,rows,i;
    printf("Enter how many rows u want : ");
    
    scanf("%d",&rows);
    
    printf("\n");
    
    for(i = 0 ; i < rows ; i++ ){
        for(space=1;space <= (2*rows-i-1) ; space++){
            if(space<=i){
            printf(" ");
            }
            else
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


