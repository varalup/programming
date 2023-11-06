#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,15,2,18,45,6};
    int *p;
    
    p=arr;
    int max = *p;
    printf("the max number is:");
    for(int i=0;i<10;i++){
        if(*p>max){
            max = *p;
        }
        p++;
    }
    printf("%d\n",max);

    return 0;
}

