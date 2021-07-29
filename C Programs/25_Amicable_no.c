//WAP to identify Friendly pair or not (amicable or not)
#include<stdio.h>
int friend(int);
int main(){
    int a, b;
    printf("Enter two nos.: ");
    scanf("%d %d", &a, &b);
    int x = friend(a);
    int y = friend(b);
    //printf("%d %d\n", x , y);
    if(x==b && y==a){
        printf("Amicable pair\n");
    }else{
        printf("Not amicable pair\n");
    }
    if(x/a == y/b){
        printf("Friendly pair");
    }else{
        printf("Not a Friendly pair");
    }
    return 0;
}
int friend(int a){
    int sum=0;
    for(int i=1; i<=a/2;i++){
        if(a%i==0){
            sum+=i;
            //printf("%d ",i);
        }
    }
    //printf("%d\n", sum);
    return sum;
}