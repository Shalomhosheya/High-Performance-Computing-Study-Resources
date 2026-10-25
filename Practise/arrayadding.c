/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int ar[3][4]= {{3,5,6,3},{3,2,8,9},{6,7,8,3}};
  int colomns = sizeof(ar)/sizeof(ar[0]);
  int rows = sizeof(ar[0])/sizeof(ar[0][0]);
  
  int sum = 0;
  for (int i = 0; i < colomns; i++) {
      for (int j = 0; j < rows; j++) {
          sum += ar[i][j];
      }
  }
  
  printf("Sum : %d",sum);

    return 0;
}
