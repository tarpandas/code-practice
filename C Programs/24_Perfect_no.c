//WAP to identify an user given number is Perfect number or not
#include<stdio.h>
int main(){
    int a, sum=0;
    printf("Enter a no.: ");
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum == a){
        printf("Perfect no.");
    }else{
        printf("Not a Perfect no.");
    }
    return 0;
}