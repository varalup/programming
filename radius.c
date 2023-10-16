#include <stdio.h>
#define pi 3.14
int main()
{
   int radius = 10;
   float area_of_circle, circumference_of_circle;
   area_of_circle = pi* radius*radius;
   circumference_of_circle = 2*pi*radius;
   printf("radius:%d\n",radius);
   printf("area_of_circle:%f\n",area_of_circle);
   printf("circumference_of_circle:%f\n",circumference_of_circle);
    

    return 0;
}

