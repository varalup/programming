#include <stdio.h>

int main()
{
	    char str[] = "level";
	        int length=0;
		    
		    
		    for(int i=0;str[i] != '\0';i++){
			             length++;
				         }
		        
		         for(int i=0 ,j=length-1;i < length/2;i++,j--){
				          
				         if(str[i] != str[j]){
						             printf("%s is not a palindrome",str);
							                 return 0;
									         } 
					      }
			     printf("%s is a palindrome",str);

			         return 0;
}
