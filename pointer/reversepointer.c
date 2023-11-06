#include <stdio.h>

int main()
{
    int i,j, arr[] = {1,2,3,4,5};
    int *p, *q;
    p = arr;
    q = p+4;
    
    for(i=0,j=4; i<j;i++,j--){
        
        int temp;
        
        temp = *p;
        *p=*q;
        *q = temp;
        p++;
        
        q--;
    }
    for(int i=0;i<5;i++){
        
    printf("%d\n",arr[i]);
}
    return 0;
}


