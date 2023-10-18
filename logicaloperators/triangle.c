#include <stdio.h>  
   
int main() {  
    int s1, s2, s3;  
    
    printf("Enter the  length of sides of a triangle\n");  
    scanf("%d %d %d", &s1, &s2, &s3);     
   
    if((s1 + s2 > s3)&&(s2 + s3 > s1)
            &&(s3 + s1 > s2)) {  
        printf("the Valid Triangle\n");  
    } else {  
        printf("the invalid Triangle");  
    }  
   
    return 0;  
}
