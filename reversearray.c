#include <stdio.h>

int main()
{
	    int arr[10] = {1, 2, 3, 4, 5, 6};
	        int temp;
		    int i,n=6;
		        for(int i = 0; i<n/2; i++){
				        temp = arr[i];
					        arr[i] = arr[n-i-1];
						        arr[n-i-1] = temp;
							    }
			    for(int i = 0; i < n; i++){
				            printf("%d\n", arr[i]);
					        }
			        return 0;
}


