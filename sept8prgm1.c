#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
int id = 0;
id=fork();
	if(id<0)
		{
			printf("child creation failed\n");
			exit(-1);
		}	
			else if(id==0)
			{
				//int counter = 0;
				
				for(int i=0;i<=999;i++);
				printf("I'm child my id = %d\n", getpid());	
				//counter++;
				exit(255);
			}
				else if(id>0)
			{
			    int status;
			    waitpid(id,&status,0);
			    printf("I'm parent my id is = %d\n",getpid());
			    if(WIFEXITED(status))
			    {
			    	printf("Parent : child process completed \n");
			    	printf("child is exited with status = %d\n",WEXITSTATUS(status));
			    }
}
return 0;
}
