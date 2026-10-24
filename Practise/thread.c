/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *printmessage(void *args){
    printf("Hello\n");
    return NULL;
}

int main()
{
    pthread_t tid;
    
    pthread_create(&tid , NULL,printmessage,NULL);
    pthread_join(tid,NULL);
    
    printf("Finished");
    
    return 0;
}
