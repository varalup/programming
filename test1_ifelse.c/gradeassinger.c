#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks of student :");
    
    scanf("%d",&marks);
    
    if(marks <= 100 && marks >= 0)
    {
       switch(marks/10)
       {
        case 10:
                printf("excellent\n");
              break;
        case 9 :
              printf("A grade\n");
              break;
        case 8 :
              printf("B grade\n");
              break;
        case 7 :
              printf("C grade\n");
              break; 
         case 6 :
              printf("D grade\n");
              break;
         case 5 :
              printf("E grade\n");
              break;      
        default :
              printf("re-write the exam.\n");
       }
    }
    

    return 0;
}

