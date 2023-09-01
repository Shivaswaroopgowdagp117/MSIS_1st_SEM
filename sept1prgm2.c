#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int id = 0;
    id = fork();
    if(id==0)
    {
        printf("%d \n",printf("I'm chil My id = %d\n",getpid()));
    }
    else if(id > 0)
    {
        printf("I'm parent My id = %d\n",getpid());
    }
    return 0;
}