//Linear Search
#include<stdio.h>
int ls(int *,int, int);
int main(){
    int a[10], n, item;
    printf("Enter the numebr of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &item);
    int index = ls(a, item, n);
    if(index != -1)
        printf("%d found at index %d.",item, index);
    else
        printf("%d not found", item);
    return 0;
}
int ls(int * a,int item, int n){
    int i, flag=0;
    for(i=0;i<n;i++){
        if(a[i]==item){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        return i;
    else
        return -1;
}