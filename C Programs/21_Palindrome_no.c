//Write a C program to write a Palindrome of a number
#include<stdio.h>
int main(){
    int a, m, i = 0, rem;
    printf("Enter the number: ");
    scanf("%d",&a);
    m = a;
    while(m!=0){
        rem = m%10;
        i = (i*10)+rem;
        m/=10;
    }
    if(a == i){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}