#include <stdio.h>
int main() {
    char s[] = "hello ";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d\n", i);
    return 0;
}
