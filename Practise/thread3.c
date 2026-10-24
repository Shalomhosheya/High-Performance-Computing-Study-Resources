/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct ThreadArgs {
    int start;
    int end;
};


int main()
{
    struct ThreadArgs args[4];
    int noOfElements = 100;
    int noOfThreads = 4;

    int chunkSize = noOfElements / noOfThreads;
    
    for (int i = 0; i < noOfThreads; i++) {

    args[i].start = i * chunkSize;

    args[i].end = (i + 1) * chunkSize;
    
     printf("Thread %d: Start = %d, End = %d\n",
           i, args[i].start, args[i].end);
}
    return 0;
}
