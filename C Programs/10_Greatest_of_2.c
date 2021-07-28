//Write a program to find the greater of two numbers
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    int max = (a>b)?a:b;
    printf("Greater: %d",max);
    return 0;
}