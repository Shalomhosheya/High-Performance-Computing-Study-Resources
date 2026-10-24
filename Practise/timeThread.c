#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

void *computation(void *num);

int main() {
    pthread_t thread1;
    pthread_t thread2;

    long num = 2;
    long num2 = 3;

    struct timespec start, end;

    // Start measuring time
    clock_gettime(CLOCK_MONOTONIC, &start);

    pthread_create(&thread1, NULL, computation, &num);
    pthread_create(&thread2, NULL, computation, &num2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Stop measuring time
    clock_gettime(CLOCK_MONOTONIC, &end);

    double elapsed = (end.tv_sec - start.tv_sec)
                   + (end.tv_nsec - start.tv_nsec) / 1e9;

    printf("Execution time: %.6f seconds\n", elapsed);

    return 0;
}

void *computation(void *num) {
    long n = 0;
    long *add_sum = (long *)num;

    for (int i = 0; i < 1000000; i++) {
        n += *add_sum;
    }

    return NULL;
}