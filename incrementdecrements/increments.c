#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d;
    
    d = ++a + ++b + ++c;
    
    printf("result of d = %d\n",d);
    
    printf("result of a = %d\n",a);
    
    printf("result of b = %d\n",b);
    
    printf("result of c = %d\n",c);
    
    d = ++a + ++b + c++;
    
    printf("result of d = %d\n",d);
    
    d = a++ + a++ + ++a;
    
    printf("result d = %d\n",d);
    d = ++a + ++a + a++;
    printf("result d = %d\n",d);

    return 0;
}

