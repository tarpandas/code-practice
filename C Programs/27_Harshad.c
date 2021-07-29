//WAP to identify Harshad number or not
#include<stdio.h>
int harshad(int);
int sumDigits(int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(harshad(a)==1)
        printf("Harshad number");
    else
        printf("Not a Harshad number");
    return 0;
}
int harshad(int a){
    int b;
    b = sumDigits(a);
    if(a % b == 0){
        return 1;
    }else
        return 0;
}
int sumDigits(int a){
    int rem, sum = 0;
    while(a!=0){
        rem = a%10;
        sum += rem;
        a/=10;
    }
    return sum;
}