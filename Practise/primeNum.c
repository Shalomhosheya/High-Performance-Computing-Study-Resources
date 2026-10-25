/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <omp.h>
int main()
{
  int start = 1;
  int finish = 100000;
  printf("Prime num %d and %d \n",start,finish);
  
  #pragma omp parallel for 
  for (int i = start; i <= finish; i++) {
      int c ;
      for (c = 2 ; c <= i-1; c++) {
        if(i % c ==0){
            break;
        }
      }
        if(c==i){
            printf("%d\n",i);
        }
      
  }
  
  
    return 0;
}
