//Write a program to calculate all natural numbers between 0 and a given number
#include<stdio.h>
int main(){
    int a;
    printf("Highest limit of natural nos.: ");
    scanf("%d",&a);
    printf("Sum of %d natural nos. is %d.",a,(a*(a+1)/2));
    return 0;
}