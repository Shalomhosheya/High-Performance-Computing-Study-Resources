/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int sum(int n);
int main()
{
    int num1;
    printf("enter number: ");
    scanf("%d",&num1);
    
    int result = sum(num1);
    printf("Answer : %d",result);
    return 0;
}

int sum(int n){
    if(n!=0){
        return n + sum(n-1);
    }else{
        return n;
    }
    
}