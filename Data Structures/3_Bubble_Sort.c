//Bubble Sort
#include<stdio.h>
int * BubbleSort(int[], int);
int main(){
    int a[10], n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    BubbleSort(a, n);
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
int * BubbleSort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    return a;
}