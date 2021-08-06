//Insertion Sort
#include<stdio.h>
int * InsertionSort(int [], int);
int main(){
    int a[10], n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    InsertionSort(a, n);
    printf("Array elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int * InsertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int t = a[i];
        int j=i-1;
        while(j>=0 && a[j]>t){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=t;
    }
}