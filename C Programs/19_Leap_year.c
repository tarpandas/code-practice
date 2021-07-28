//Write a program to test out a leap year
#include<stdio.h>
int main(){
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if(a%400==0)
        printf("Leap Year");
    else if(a%100==0)
        printf("Not a Leap Year");
    else if(a%4==0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}