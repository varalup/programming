#include <stdio.h>

int main()
{
    int n ,i,j;
    int star=n;  
  printf("Enter the value");  
  scanf("%d",&n);  
  
 for( i=1;i<=n;i++)  
 {  
     
     for(j=star;j>=1;j--){
         printf("*");
     }
         star=star-1;
         printf("\n");
     }
     star=2;
     for(i=1;i<n;i++){
         for(j=1;j<=star;j++){
             printf("*");
         }
         star=star+1;
         printf("\n");
         
         }
     return 0;
 }
 

