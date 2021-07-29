//WAP to identify Automorphic number or not
#include<stdio.h>
int count(int);
int aut(int, int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int n = count(a);
    int b = a*a;
    if(aut(a,b)==1){
        printf("Automorphic.");
    }else{
        printf("Not automorphic.");
    }
}
int count(int a){
    int count=0;
    while(a!=0){
        count++;
        a/=10;
    }
    return count;
}
int aut(int a, int b){
    while(a>0){
        if(a%10 != b%10)
            return 0;
        a/=10;
        b/=10;
    }
    return 1;
    
}