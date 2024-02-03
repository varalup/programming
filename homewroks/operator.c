#include <stdio.h>

int main()
{
    int num1,num2;
    char charrrr;
    printf("select the options like +,-,*,/ ");
    scanf("%c",&charrrr);
    printf("Enter any 2 numbers");
    scanf("%d%d",&num1,&num2);
    switch(charrrr)
    {
        case '+' :
              printf("addtion of 2 numbers is %d",num1+num2);
              break;
        case '-' :
              printf("subtraction of 2 numbers is %d",num1-num2);
              break;
        case '*' :
                 printf("multiplication of 2 numbers is %d",num1*num2);
              break;
        case '/' :
                 printf("division of 2 numbers is %d",num1/num2);
              break;      
        default :
              printf("Enter only +,-,*,/");
    }   
    

    return 0;
}
