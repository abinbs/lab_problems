#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* link;
}*head=NULL;

void create_list(int num);
void print();
void add_end(int n);

int main(){
    int num=0,i,val=0,n;
    printf("Enter no of elements");
    scanf("%d",&val);
    printf("Enter the values");
    for(i=0;i<val;i++){
        scanf("%d",&num);
        create_list(num);
    }
    print();
    printf("Enter value to add");
    scanf("%d",&n);
    add_end(n);
    print();
}
void create_list(int num){
    struct Node *ptr,*temp;
    if(head==NULL){
        head=(struct Node*)malloc(sizeof(struct Node));
        head->data=num;
        head->link=NULL;
    }
    else{
        ptr=head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=num;
        temp->link=NULL;
        ptr->link=temp;
    }
}
void print(){
    struct Node *ptr;
    ptr=head;
    printf("List is: ");
    while(ptr!=NULL){
        printf(" %d",ptr->data);
        ptr=ptr->link;
    }
}
void add_end(int n){
    struct Node *ptr,*temp;
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=n;
    temp->link=NULL;
    ptr->link=temp;
}
