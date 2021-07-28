//WAP to check A character is a vowel or consonant
#include<stdio.h>
int main(){
    printf("Enter the character: ");
    char a;
    scanf("%c", &a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        printf("The character '%c' is a vowel (Lowercased).",a);
    else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("The character '%c' is a vowel (Uppercased).",a);
    else
        printf("The character '%c' is a consonant.",a);
    
    return 0;
}