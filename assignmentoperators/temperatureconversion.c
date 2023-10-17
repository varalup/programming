#include <stdio.h>

int main()
{
   float celsius, fahrenheit;
   
   
   printf("Enter the  temperature in celsius :\n");
   
   scanf("%f",&celsius);
   
  fahrenheit = celsius * 9/5 + 32;
   
   
   printf("fahrenheit:%f \n", fahrenheit);
   
    return 0;
}


