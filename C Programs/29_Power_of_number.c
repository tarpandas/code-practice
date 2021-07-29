//WAP to find out Power of a number
#include<stdio.h>
int power(int, int);
int main(){
    int a, b;
    printf("Enter the number and power, resp: ");
    scanf("%d %d", &a, &b);
    printf("Power: %d", power(a,b));
    return 0;
}
int power(int a, int b){
    int pow = a;
    for(int i=1; i<b; i++){
        pow = pow * a;
    }
    return pow;
}