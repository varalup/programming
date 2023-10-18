#include <stdio.h>
#include <string.h>
int main()
{
    char temp[] = "we are humam beings";
    char temp1[] = "humam";
    char *found = strstr(temp,temp1);
    if (found){
        printf("found string position");
    } else {
    printf("not found string position");
}
    return 0;
}

