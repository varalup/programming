#include <stdio.h>

#define pI 3.14

int main()
{
   int area, radius;
   
   printf("Enter the radius\n");
   
   scanf("%d ", &radius);
   
   area = pI * radius * radius;
   
   printf("area of circle : %d\n", area);

    return 0;
}

