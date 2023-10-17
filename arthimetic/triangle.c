#include <stdio.h>

int main()
{
   int area, base,height;
   
   printf("Enter the triangle of base and height:\n");
   
   scanf("%d %d ", &base,&height);
   
   area = 0.5 * base * height;
   
   printf("area of triangle : %d\n", area);

    return 0;
}

