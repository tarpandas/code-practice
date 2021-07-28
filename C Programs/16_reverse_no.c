//Write a program to print a number in reverse
#include<stdio.h>
int main(){
    int a,b, count=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("No. in reverse: ");
    while(a!=0){
        b=a%10;
        printf("%d",b);
        a/=10;
    }
    return 0;
}