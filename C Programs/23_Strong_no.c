//Write a C program to show whether a number is a Strong no. or not
#include<stdio.h>
int factorial(int);
int main(){
    int a, b, rem, sum=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a;
    while(b!=0){
        rem = b % 10;
        sum += factorial(rem);
        b /= 10;
    }
    if(a == sum){
        printf("Strong no.");
    }else{
        printf("Not a Strong no.");
    }
    return 0;
}
int factorial(int a){
    int fact=1;
    while(a!=1){
        fact = fact * a;
        a--;
    }
    return fact;
}