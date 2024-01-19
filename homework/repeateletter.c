#include <stdio.h>

int main()
{
    char str[]="programming";
    int length=0;
    char n;
    int count=0;
    
    for(int i=0; str[i]!='\0';i++){
        length++;
    }
    printf("enter a letter ");
    scanf("%c",&n);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==n){
            count++;
            
        }
    }
    printf("given letter has repeated %d ",count);
    return 0;
}

