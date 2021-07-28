//Write a C program to find the sum of all the digits in a number
#include<stdio.h>
int main(){
    int a,b, count=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        count+=b;
        a/=10;
    }
    printf("Sum of digits: %d",count);
    return 0;
}