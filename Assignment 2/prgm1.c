#include <pthread.h>
#include <stdio.h>
#include<unistd.h>

int sum = 0;
int n;

void *sum_thread(void *arg) {
      for (int i = 1; i <= n; i++) {
            sum += i;
      }
        pthread_exit(NULL);
}

int main() {
      pthread_t tid;
        pid_t pid = getpid();

          printf("Main thread PID: %d\n", pid);

            pthread_create(&tid, NULL, sum_thread, NULL);

              printf("Thread ID: %lu\n", tid);

                pthread_join(tid, NULL);

                  printf("Sum of first %d numbers: %d\n", n, sum);

                    return 0;
}
}
      }
}