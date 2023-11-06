#include <stdio.h>

int main()
{
    char *a[] = { "Hello", "World"};
    
    for(int i=0;i<2;i++)
    {
       printf("%s\n",a[i]); 
    }
    

    return 0;
}
