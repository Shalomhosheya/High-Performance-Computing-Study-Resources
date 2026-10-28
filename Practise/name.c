#include <stdio.h>

int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    name[0]="X";

    printf("Your name is now: %s\n", name);

    return 0;
}