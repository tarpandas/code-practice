//WAP Binary to decimal conversion
#include<stdio.h>
int power(int a, int b){
    int powered=1;
    for(int i=0;i<b;i++)
        powered *= a;
    return powered;
}
int main(){
    int place=-1, num=0, a;
    printf("Enter a number in binary: ");
    scanf("%d",&a);
    int count; int rem;
    while(a!=0){
        place++;
        rem = a%10;
        if(rem==1){
            num+=power(2,place);
        }
        a/=10;
    }
    printf("Number: %d",num);
}