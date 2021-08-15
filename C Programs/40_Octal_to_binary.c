//WAP Octal to binary conversion
#include<stdio.h>
int power(int a, int b){
    int powered=1;
    for(int i=0;i<b;i++)
        powered *= 8;
    return powered*a;
}
int main(){
    int place=-1, num=0, a;
    printf("Enter a number in Octal: ");
    scanf("%d",&a);
    int count; int rem;
    while(a!=0){
        place++;
        rem = a%10;
        num+=power(rem,place);
        a/=10;
    }

    a=num;
    int arr[10]; count=-1;
    for(int i=0;a!=0;i++){
        arr[i] = a%2;
        a/=2;
        count++;
    }
    printf("It's binary: ");
    for(int i=count;i>=0;i--)
        printf("%d",arr[i]);
    return 0;

}