

#include <stdio.h>
#include <string.h> 
int main()
{
    int i;
    char str[] ="Helloworld";
    char copy[30];
    
    for(i=0;str[i]!='\0';i++){
        copy[i]=str[i];
    }
    
        
    printf("copy : %s\n", copy);
    
    return 0;
    
    
    
}
