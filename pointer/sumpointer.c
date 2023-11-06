#include <stdio.h>

int main()
{
    int result =0, arr[]= {1,2,3,4,5};
    
    int *p = arr;
    
    for(int i=0;i<5;i++,p++){
        result = result + *p;
    }
    printf("the sum of array elements:%d\n",result);

    return 0;
}


