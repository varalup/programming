#include <stdio.h>

int main()
{
   int area, base1,base2,height;
   
   printf("Enter the Trapezoid of  base1 and base2 and height:\n");
   
   scanf("%d %d  %d ", &base1, &base2 ,&height);
   
   area =   0.5*(base1+base2) * height;
   
   printf("area of Trapezoid : %d\n", area);

    return 0;
}
