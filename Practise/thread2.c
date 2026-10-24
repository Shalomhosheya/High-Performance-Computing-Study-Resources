/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct ThreadArgs{
    int start;
    int end;
};

void *printNumbers(void *arg){
    struct ThreadArgs *args = (struct ThreadArgs *)arg;
    
    for (int i = args->start; i <args->end ; i++) {
        printf("%d \n",i);
    }
    return NULL;
    
}

int main()
{
    pthread_t tid;
    
    struct ThreadArgs args = {1,100};
    
    pthread_create(&tid,NULL,printNumbers,&args);
    pthread_join(tid,NULL);
    
    
    printf("\n Finished");
    
    return 0;
}
