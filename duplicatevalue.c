#include <stdio.h>  
   
int main()  
{  
     
    int arr[] = {1, 2, 4, 4, 2, 7, 8, 8, 3};   
      
     
    int size = sizeof(arr)/sizeof(arr[0]);  
      
    printf("Duplicate elements in  values: \n");  
      
    for(int i = 0; i < size; i++) {  
        for(int j = i + 1; j < size; j++) {  
            if(arr[i] == arr[j])  
                printf("%d\n", arr[j]);  
        }  
    }  
    return 0;  
}  
