#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int id=0;
    id = fork();
    if (id == 0)
    {
        printf("Hello MCIS = %d\n",getpid());
    }
    else{};
    return 0;

}