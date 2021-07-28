//LCM of two nos.
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter the two nos.: ");
	scanf("%d %d", &a, &b);
	int max = (a>b)?a:b;
	while(1){
		if(max % a == 0 && max % b == 0){
			printf("LCM: %d",max);
			break;
		}
		max++;
	}
	return 0;
}