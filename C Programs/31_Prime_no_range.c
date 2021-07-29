//WAP to print Prime numbers in a given range
#include<stdio.h>
int swap(int *a, int *b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
void prime(int *a, int *b){
    int num=*a, flag;
    while(num<*b){
        if(num==0 || num == 1){
            break;
        }
        for(int i=2;i<num/2;i++){
            if(num % i != 0)
                flag = 0;
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ",num);
        num++;
        
    }
        
}
int main(){
    int a, b;
    printf("Enter low and high, resp: ");
    scanf("%d %d", &a, &b);
    if(b<a)
        swap(&a, &b);
    //printf("%d %d", a, b);
    prime(&a, &b);
    return 0;
}
