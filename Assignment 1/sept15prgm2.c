#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
int id = 0;
id=fork();
int status;
	if(id<0)
		{
			printf("child creation failed\n");
			exit(-1);
			}	
			else if(id==0)
			{
				//int counter = 0;
				sleep(8);
				printf("I'm child my id = %d\n", getpid());	
			}
			else if(id>0)
			{
				//printf("I'm parent \n");
				waitpid(id,&status,0);
				printf("I'm parent id = %d\n",getpid());
				//if(WIFEXITED(status));
			}
		return 0;
	}
