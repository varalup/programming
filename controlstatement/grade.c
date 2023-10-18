#include <stdio.h>

int main()
{
    int marks;
    
    printf("enter the marks between 0 to 100:\n");
    
    scanf("%d", &marks);
    
    if(marks >= 90 && marks <=100){
        
        printf("your got A grade");
        
         if(marks >=80){
            printf("you got B grade");
        }
        else if(marks >= 70){
            printf("you got C grade");
        }
        else if(marks>=60){
            printf("you got D grade");
        }
        else if(marks >=50){
            printf("you got E grade");
        }
        else if(marks<40){
            printf("you fail in ths exam");
        }
 
  
    
    return 0;
}
}
