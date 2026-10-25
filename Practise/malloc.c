/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{
  
  char *name = malloc(50);
  int age = 24;
  strcpy(name,"Shalom");
  
  if (argc>=3) age = atoi(argv[2]);
  if (argc>=2) strcpy(name, argv[1]);
  
  printf("Hi %s , You are %age",name,age);
    
}
