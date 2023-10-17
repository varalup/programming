#include <stdio.h>

#define pi 3.14

int main()
{
   int radius;
   
   float  volume;
   printf("Enter the  radius :\n");
   
   scanf("%d", &radius);
   
   volume = 4/3 * pi * radius * radius*radius;
   
   printf("volume of sphere %f\n", volume);
   
    return 0;
}

