#include <stdio.h>

int main()
{
   int area, base,height;
   
   printf("Enter the area of parallelogram  base and height:\n");
   
   scanf("%d %d ", &base, &height);
   
   area =   base * height;
   
   printf("area of parallelogram : %.3d\n", area);

    return 0;
}

