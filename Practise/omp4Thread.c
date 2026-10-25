/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <omp.h>

int main()
{
    // #pragma omp parallel for num_threads(4)
    // for (int i = 0; i < 8; i++) {
    //     printf("Thread %d : i = %d\n",omp_get_thread_num(),i);
    // }


    /*exercise 2
    int N = 1000000;
    int numbers[N];
    int result[N];
    
    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        result[i] = numbers[i] * 2;
    }*/
    
    int counter = 0;
    #pragma omp parallel num_threads(4)
    {
        counter++;
    }
    
    
    printf("counter = %d",counter);
    

    return 0;
}