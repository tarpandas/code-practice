//Selection sort
#include<stdio.h>
void SelectionSort(int [], int);
int main(){
    int a[10] , n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    SelectionSort(a,n);
    printf("Sorted array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}
void SelectionSort(int a[], int n){
    int i, j, min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j])
                min=j;
        }
        if(a[i]!=a[min]){
            a[i] = a[i] + a[min];
            a[min] = a[i] - a[min];
            a[i] = a[i] - a[min];
        }
    }
}