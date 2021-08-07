//Merge Sort
#include<stdio.h>
void Merge(int a[], int lower, int mid, int upper){
    int b[20];
    int i=lower;
    int j=mid+1;
    int k=lower;
    while(i<=mid && j<=upper){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }else if(a[i]>=a[j]){
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=upper){
            b[k]=a[j];
            j++;
            k++;
        }
    }else if(j>upper){
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    //Now, allocating the variables from temporary to the main array
    //Here, we set p to lower bound and iterate upto k
    int p=lower;
    while(p<k){
        a[p]=b[p];
        p++;
    }
}
void MergeSort(int a[], int lower, int upper){
    if(upper>lower){
        int mid=(lower+upper)/2; //calculate mid index
        MergeSort(a, lower, mid); //1st half - lower to mid
        MergeSort(a, mid+1, upper); //2nd half - mid+1 to upper
        Merge(a, lower, mid, upper);
    }
}
int main() {
    int a[10]={7,4,3,6,8,3,9,5,4,2};
    MergeSort(a, 0, 9);
    printf("Sorted Array: ");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}