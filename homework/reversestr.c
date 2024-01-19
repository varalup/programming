#include <stdio.h>
#include <string.h>
int main(){

char str [] = "varalu";
int i,length,temp;

length = strlen(str);

for(i=0;i<length/2;i++)
{
  temp = str[i];

  str[i] = str[length -1-i];

  str[length -1-i] = temp;

}

printf("reverse word in string:%s\n",str);

return 0;
} 	

