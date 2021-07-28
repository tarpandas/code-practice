//Program to calculate GCD of two numbers
#include<stdio.h>
void swap( int *, int *);
int main(){
    int a, b, flag;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        swap(&a,&b);
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            flag=i;
        }else flag=1;
    }
    printf("GCD: %d",flag);
}
void swap(int * a, int * b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}