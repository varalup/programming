#include <stdio.h>
#include <string.h>
int main()
{
	char c[20], tempt;
	int count = 0;

	printf("enter the string sorted:\n");
        scanf("%s",  c);
        int n=strlen(c);
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			count ++;
			if(c[i]>c[j]){

		        tempt = c[i];
                        c[i] = c[j];
                        c[j] = tempt;
             }
	  }
     }

printf("sorted string is: %s\n" , c);

return 0;
}














			
		

