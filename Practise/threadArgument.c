/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *computation(void *num);

int main(){
    pthread_t thread1;
    pthread_t thread2;
    long num = 2;
    long num2 = 3;
    
    pthread_create(&thread1,NULL,computation,(void*) &num);
    pthread_create(&thread2,NULL,computation,(void*) &num2);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    
    return 0;
}
void *computation(void *num){
    long *add = (long *)(num);
    printf("argument : %ld\n",*add);
}