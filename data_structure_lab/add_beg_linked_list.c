#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
}*head=NULL;
void createList(int num);
void Print();
void add_beg(int n);
int main()
{
    int num=0,i,val=0,n;
    
    printf("Enter the number of items");
    scanf("%d",&val);
    printf("Enter the numbers");
    for(i=0;i<val;i++){
        scanf("%d",&num);
        createList(num);
    }
    Print();
    printf("Enter the number");
    scanf("%d",&n);
    add_beg(n);
    Print();

}
void createList(int num){
    struct Node *q, *temp;
    if(head==NULL){
        head=(struct Node*)malloc(sizeof(struct Node));
        head->data=num;
        head->link=NULL;
    }
    else{
        q=head;
        while(q->link!=NULL){
            q=q->link;
        }
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=num;
        temp->link=NULL;
        q->link=temp;
    }
}
void Print(){
    struct Node* ptr;
    ptr=head;
    printf("List is :");
    while(ptr!= NULL){
        printf("  %d",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
void add_beg(int n){
    struct Node *temp,*ptr;
    ptr=head;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=n;
    temp->link=ptr;
    head=temp;
    
}
