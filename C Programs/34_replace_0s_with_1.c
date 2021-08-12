//WAP to Replace all 0’s with 1 in a given integer
#include<stdio.h>
int main(){
    int a, rem, revNumber=0, newNumber=0;
    printf("Enter a number with zeros: ");
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        if(rem==0)
            rem=1;
        revNumber=revNumber*10+rem;
        a/=10;
    }
    while(revNumber!=0){
        rem=revNumber%10;
        newNumber=newNumber*10+rem;
        revNumber/=10;
    }
    printf("New number= %d",newNumber);
    return 0;
}