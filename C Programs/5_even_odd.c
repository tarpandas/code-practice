//WAP to identify A number is even or odd
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0)
        printf("The no. %d is even.",a);
    else
        printf("The no. %d is odd.",a);
    return 0;
}