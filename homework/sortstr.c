#include <stdio.h>
#include <string.h>

int main () {
   char str[] = "thisismybook ";
   int temp;

   int i, j,length;
    length = strlen(str);

   printf("String before sort:%s \n", str);

   for (i = 0; i < length-1; i++) {
      for (j = i+1; j < length; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }
   
   printf("String after sort: %s \n", str);
   return 0;
}


