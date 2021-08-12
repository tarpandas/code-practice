//WAP to print Armstrong numbers between two intervals
#include<stdio.h>
int power(int rem, int count){
    int p=1;
    for(int i=0;i<count;i++){
        p*=rem;
    }
    return p;
}
int main(){
    int low, high;
    printf("Enter the lower and higher numbers:");
    scanf("%d %d",&low, &high);
    for(int i=low+1;i<high;i++){
        int x=i;
        int count=0;
        while(x!=0){
            x/=10;
            count++;
        }
        x=i;
        int rem=0, sum=0;
        while(x!=0){
            rem=x%10;
            sum+=power(rem, count);
            x/=10;
        }
        if(i==sum)
            printf("%d ",i);
    }
    return 0;
}