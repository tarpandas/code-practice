//Write a program to find factorial of a number
#include<stdio.h>
int main(){
    long long int a, b;
    printf("Enter the number: ");
    scanf("%lli", &a);
    for(int i=a-1;i!=0;i--){
        a*=i;
    }
    printf("Factorial: %lli",a);
    return 0;
}