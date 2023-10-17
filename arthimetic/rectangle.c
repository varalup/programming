#include <stdio.h>

int main()
{
   int area, length, breath ;

   printf("Enter the length and breath of rectangle\n");

   scanf("%d %d", &length, &breath);

   area = length * breath;

   printf("area of rectangle : %d\n", area);

    return 0;
}

