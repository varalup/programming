#include <stdio.h>

int main()
{
    int operator;
    
    int a =10, b =20;
    
    printf("enter the operator:");
    
    scanf("%d", &operator);
    
    if(operator == '+'){
        
        printf("sum:%d\n",a+b);
        
    }else if(operator == '-'){
        
        printf("difference:%d\n",a-b);
        
    }else if(operator == '/'){
        
        printf("division:%d\n",a/b);
        
    }else if(operator == '*'){
        
        printf("multiply:%d\n",a*b);
    }
    switch(operator){
        
        case '+':
        printf("sum:%d\n",a+b);
        
        case '-':
        printf("diff:%d\n",a-b);
        
        case '/':
        printf("div:%d\n",a/b);
        
        case '*':
        
        printf("mul:%d\n",a*b);
    }
    

    return 0;
}

	
