#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *link;
}*header,*ptr,*temp;
void createList(int num);
void Print();
void add_end(int n);

void initialize(){
    header=(struct Node*)malloc(sizeof(struct Node));
    header->link=NULL;
}


int main()
{
    
    
    initialize();
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
    add_end(n);
    Print();

}
void createList(int num){

        ptr=header;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=num;
        temp->link=NULL;
        ptr->link=temp;
    
}
void Print(){
    
    ptr=header->link;
    printf("List is :");
    while(ptr!= NULL){
        printf("  %d",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
void add_end(int n){
   
    ptr=header;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL){
        printf("Memory underflow");
        exit(0);
    }
    temp->data=n;
    temp->link=NULL;
    ptr->link=temp;
}
