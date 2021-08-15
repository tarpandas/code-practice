//WAP Decimal to octal conversion
#include<stdio.h>
int main(){
    int a; int arr[10], count=-1;
    printf("Enter a decimal no. ");
    scanf("%d", &a);
    for(int i=0;a!=0;i++){
        arr[i] = a%8;
        a/=8;
        count++;
    }
    printf("It's Octal: ");
    for(int i=count;i>=0;i--)
        printf("%d",arr[i]);
    return 0;
}