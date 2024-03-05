#include <stdio.h>

#include <unistd.h>

int main()
{
	int pid;

	pid = fork();

	if(pid == 0) {
		printf("child process retrun value:%d\n",pid);
	 }
         
	  else{

	  printf("parent process retrun value:%d\n",pid);

	  }

	  printf("current process pid:%d\n",pid);

	  while (1);

	  return 0;

 }
