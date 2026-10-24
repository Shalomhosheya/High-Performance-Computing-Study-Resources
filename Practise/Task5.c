/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(){
int age[5]={20,22,21,25,24};
// printf("%d",age[0]);
int length = sizeof(age)/sizeof(age[0]);

for (int i = 0; i < length; i++) {
    printf("%d \n",age[i]);
}
 return 0;
}