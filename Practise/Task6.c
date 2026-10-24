/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(){
int mark[5];
int total=0;
for (int i = 1; i <= 5; i++) {
    printf("Enter the sub %d mark: \n ",i);
    scanf("%d",&mark[i]);
    
    total += mark[i]; 
}
 
 int lenght =  sizeof(mark)/sizeof(mark[0]);
 float avg = (float)total / lenght;
 
 
 printf("Total: %d \n",total);
 printf("Average : %2.f",avg);
 
 return 0;
}