//Singly Linked List
#include<stdio.h>
#include<stdlib.h>
void new_node(int);
void display();
typedef struct node{
    int data;
    struct node * next;
}node;

int main(){
    new_node(12);
    new_node(23);
    new_node(34);
    new_node(22);
    display();
    return 0;
}

node * start = NULL;
void new_node(int item){
    node * ptr = NULL;
    ptr = (node *)malloc(sizeof(node));
    ptr->data=item;
    if(start==NULL){
        ptr->next=NULL;
        start = ptr;
    }
    else{
        ptr->next=start;
        start=ptr;
    }
}
void display(){
    node *ptr=start;
    while(ptr->next!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }if(ptr->next==NULL)
        printf("%d",ptr->data);
}


