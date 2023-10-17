#include <stdio.h>

int main()
{
    int meter,second,speed;
    
    printf("enter the meter and second\n");
    
    scanf("%d %d",&meter,&second);
    
    speed = meter / second;
    
    printf("speed of distance travel:%d\n",speed);

    return 0;
}

