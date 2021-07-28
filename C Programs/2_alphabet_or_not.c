//WAP to check A character is an alphabet or not
#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){
        printf("It is an alphabet.");
    }
    else
        printf("It is not an alphabet.");
    
    return 0;
}