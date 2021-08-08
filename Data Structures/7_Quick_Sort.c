//Quick Sort
#include<stdio.h>
void swap(int * x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int a[], int lower, int upper){
    int pivot = a[lower];
    int start = lower;
    int end = upper;
    while(start<end){
        while( a[start] <= pivot){
            start ++;
        }
        while( a[end] > pivot){
            end--;
        }
        if(start<end){
            swap(&a[start], &a[end]);
        }
    }
    swap(&a[lower], &a[end]);
    return end;
}
void quicksort(int a[], int lower, int upper){
    if(lower<upper){
        int loc = partition(a, lower, upper);
        quicksort(a, lower, loc-1);
        quicksort(a, loc+1, upper);
    }
}
int main(){
    int a[]={4,3,6,8,6,4,2,7,9,5};
    quicksort(a, 0, 9);
    printf("Sorted array: ");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}