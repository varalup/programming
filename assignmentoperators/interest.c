#include <stdio.h>

int main()
{
   int Principal,Rate,Time,Interest;
   
   
   printf("Enter the  value of Principal,Rate,Time :\n");
   
   scanf("%d %d%d",&Principal, &Rate,&Time);
   
 Interest = Principal * Rate * Time /100;
   
   
   printf("Simple Interest:%d\n",Interest );
   
    return 0;
}

