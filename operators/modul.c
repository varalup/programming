


#include <stdio.h>

int main()
{
    int var1,var2,modul;

    printf("Enter the two number of var1,var2\n");
    scanf("%d %d",&var1,&var2);
     modul = var1 % var2;
     printf("modul of %d %% %d = %d\n",var1,var2,modul);

    return 0;
}
