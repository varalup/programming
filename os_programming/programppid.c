 #include <stdio.h>

#include <unistd.h>

int main() {

        int  ppid;

        ppid = getppid();

        printf("hello world current process ppid:%d\n",ppid);

        while (1);

        return 0;
 } 
