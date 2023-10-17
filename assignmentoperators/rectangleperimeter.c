#include <stdio.h>

int main()
{
   int radius;
   
   int length,width,area,perimeter;
   printf("Enter the  rectangle of length and width :\n");
   
   scanf("%d %d", &length,&width);
   
   area = length * width;
   
   perimeter = 2 * (length + width);
   
   printf("area:%d and perimeter:%d\n",area,perimeter);
   
    return 0;
}
