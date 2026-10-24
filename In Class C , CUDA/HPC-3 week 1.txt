/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float unitPrice, discountRate;
    int quantity;
    float totalPrice, discount, totalPayable;

    printf("Enter unit price : ");
    scanf("%f", &unitPrice);

    printf("Enter quantity : ");
    scanf("%d", &quantity);

    printf("Enter discount rate (%%) : ");
    scanf("%f", &discountRate);

    totalPrice = unitPrice * quantity;
    discount = totalPrice * discountRate / 100;
    totalPayable = totalPrice - discount;

    printf("\nTotal price is : Rs %.2f", totalPrice);
    printf("\nDiscount is    : Rs %.2f", discount);
    printf("\nTotal payable  : Rs %.2f\n", totalPayable);

    return 0;
}