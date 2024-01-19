#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="varalu";
    
    int i,j,k;
    
    for(i=0;i<strlen(str);i++){
        
        for(j=i+1;str[j];j++){
            
            if(str[j]==str[i]){
                
                for(k=j;str[k]!='\0';k++){
                    
                    str[k]=str[k+1];
            }
        }
    }
    }
    printf("remove:%s\n",str);

    return 0;
}


