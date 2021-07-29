//WAP to find out Factors of a number
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Factors: ");
    for(int i=1; i<=a;i++){
        if(a%i == 0)
            printf("%d ",i);
    }
    return 0;
}