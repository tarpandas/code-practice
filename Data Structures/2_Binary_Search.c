//Binary Search
#include<stdio.h>
int BinarySearch(int [], int, int, int);
int main(){
    int item, a=-1;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Enter the item to be found: ");
    scanf("%d", &item);
    a = BinarySearch(arr, 0, 9, item);
    if(a==-1)
        printf("Item not found.");
    else
        printf("Item found at index %d.", a);
    return 0;
}
int BinarySearch(int a[], int min, int max, int item){
    int i = (min+max)/2;
    if(max>min){
        if(a[i]==item)
            return i;
        else if(a[i]>item)
            return BinarySearch(a, min, i, item);
        else
            return BinarySearch(a, i, max, item);
    }
    return -1;
}