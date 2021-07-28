//Write a C program find a fibonacci sequence upto a limit
#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Enter the number limit: ");
    scanf("%d", &n);
    printf("%d %d ",a,b);
    c=a+b;
    while(c<n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}