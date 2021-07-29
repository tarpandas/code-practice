//Write a C program to describe whether a number is Armstrong or not
#include<stdio.h>
int cube(int);
int main(){
    int a, b, sum=0, rem;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = a;
    while(b!=0){
        rem = b%10;
        sum += cube(rem);
        b /= 10;
    }
    if(a == sum){
        printf("The number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
    return 0;
}
int cube(int a){
    return a*a*a;
}