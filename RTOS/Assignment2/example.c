#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
void *f1(void *ptr);
void *f2(void *ptr);
pthread_t t1,t2;
int main(void)
{
    pthread_create(&t1, NULL, f1, NULL);
     
    pthread_create(&t2, NULL, f2, NULL);
    //pthread_join(t2,NULL);
    while(1)
    {
        long int counter = 0;
        while(counter < 100000000)
        {
            counter++;
            if(counter == 100000000)
            {
                printf("i'm main thread \n");
                counter  = 0;
                return 0;
            }
        }
    }
    
}

void *f1(void *ptr)
{
    long int counter = 0;
    while(counter < 100000000)
    {
        counter++;
        if(counter == 100000000)
        {
            printf("i'm thread t1\n");
            counter  = 0;
           // return NULL;
        }
    }
}


void *f2(void *ptr)
{
    long int counter = 0;
    while(counter < 100000000)
    {
        counter++;
        if(counter == 100000000)
        {
            printf("i'm thread t2\n");
            counter  = 0;
            //return NULL;
        }
    }
}