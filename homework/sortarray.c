#include <stdio.h>    
     
int main()    
{    
        
    int arr[] = {20, 50, 80, 75, 1};     
    int temp = 0;    
   
    printf("Elements of  array: \n");    
    for (int i = 0; i < 5; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    for (int i = 0; i < 5; i++) {     
        for (int j = i+1; j < 5; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    printf("Elements of sort array in ascending : \n");    
    for (int i = 0; i < 5; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}     

