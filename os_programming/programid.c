#include <stdio.h>

#include  <unistd.h>

int main(){

        int pid;

        pid = getpid();

        printf("hello world current process pid:%d\n",pid);

        while (1);

        return 0;
}

