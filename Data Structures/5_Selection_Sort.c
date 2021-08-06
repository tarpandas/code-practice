//Selection sort
#include<stdio.h>
int * SelectionSort(int [], int);
void swap(int * , int *);
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
int * SelectionSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
            for(int j=0;j<n;j++){
                if(a[min]>a[j])
                    min=j;
            }
            swap(&a[i],&a[min]);
        }
    return a;
}
void swap(int * a, int * b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}