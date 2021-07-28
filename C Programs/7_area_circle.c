//WAP to find out Area of a circle (radius value user given) 
#include<stdio.h>
int main(void){
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("Area of circle: %.2f sq. units",(3.14 * radius * radius));
}