#include <stdio.h>

int main()
{
    int km;
    
    double miles;
    
    printf(" Enter the distance in km\n");
    
    scanf("%d",&km);
    
    miles = km /0.621371;
    
    printf("conver km to miles = %0.2f\n",miles);

    return 0;
}

