#include<stdio.h>
 
int main() {
    int number, min, max;
     
    printf("Enter an number\n");
    scanf("%d", &number);
    printf("Enter the minimum and maximum range\n");
    scanf("%d %d", &min, &max);
     
    if((number-min)*(number-max) <= 0){
        printf("%d is in range  [%d, %d]", number, min, max);
    } else {
     printf("%d is not in range  [%d, %d]", number, min, max);
    }
 
    return 0;
}
