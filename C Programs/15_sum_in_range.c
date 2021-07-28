//Write a program to calculate all natural numbers between two inputs
#include<stdio.h>
int main(){
    int a,b;
    printf("limit of natural nos.: ");
    scanf("%d %d",&a,&b);
    for(int i=a+1;i<=b;i++){
        a+=i;
    }
    printf("Sum: %d",a);
    return 0;
}