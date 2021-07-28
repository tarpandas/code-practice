//Write a C program to find whether a number is prime of not
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, flag=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a==0 || a == 1){
        printf("Not a prime no.");
        exit(0);
    }  
    if(a>1){
        for(int i=2; i<=a/2; i++){
            if(a%i!=0)
                flag=1;
            else{
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("No. is prime.");
    else
        printf("No. is not prime.");
    return 0;
}