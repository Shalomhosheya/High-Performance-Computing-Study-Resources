#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct ThreadArgs {
    int start;
    int end;
};

void *countPrimes(void *arg) {
    long long *result = malloc(sizeof(long long));

    if (result == NULL) {
        pthread_exit(NULL);
    }

    // Example result for demonstration
    *result = 25;

    pthread_exit(result);
}

int main() {
    pthread_t tid;
    void *threadResult;

    struct ThreadArgs args[4];

    if (pthread_create(&tid, NULL, countPrimes, &args[0]) != 0) {
        printf("Thread creation failed\n");
        return 1;
    }

    if (pthread_join(tid, &threadResult) != 0) {
        printf("Thread join failed\n");
        return 1;
    }

    if (threadResult != NULL) {
        long long *count = (long long *)threadResult;

        printf("Prime count: %lld\n", *count);

        free(count);
    }

    return 0;
}