//WAP to identify Abundant number or not
#include<stdio.h>
int main(){
    int a, sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Divisors: ");
    for(int i=1; i<=a/2; i++){
        if(a%i==0){
            sum+=i;
            printf("%d ",i);
        }       
    }
    if(sum>a)
        printf("\nAbundant as sum of factors = %d", sum);
    else
        printf("\nNot abundant as sum of factors = %d", sum);
    return 0;
}