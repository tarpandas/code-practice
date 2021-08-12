//“Can a number be expressed as a sum of two prime numbers”—WAP to exaplain?
#include<stdio.h>
int sum_of_two(int);
int main() {
    int n, flag=0;
    printf("Enter the number to test: ");
    scanf("%d",&n);
    for(int i=2; i<=n/2;i++)
        if(sum_of_two(i)==1)
            if(sum_of_two(n-i)==1){
                printf("%d + %d = %d\n",i,(n-i),n);
                flag=1;
            }
    if(flag==0)
        printf("Not a sum of primes");
    return 0;
}
int sum_of_two(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return 0;
        }
    }

    return 1;
}