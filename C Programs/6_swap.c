//WAP to Swap two numbers without third variable
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the number 1: ");
    scanf("%d", &a);
    printf("Enter the number 2: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping,\nnumber 1: %d\nnumber 2:%d",a,b);
    return 0;
}