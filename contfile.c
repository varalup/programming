#include <stdio.h>  
   
int main(int argc,char **argv)  
{   char ch[50];  
    FILE *file;  
    int count = 0;  
      
    file = fopen(argv[1],"r");  
      
    while((fgets(ch,50,file)) != NULL){  
      printf("%s\n",ch);

        if(ch == ' ' || ch == '\n')  
            count++;  
    }  
    printf("Number of words present in given file: %d", count);  
    fclose(file);  
      
    return 0;  
}
