#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *link;
}*header,*ptr,*temp,*ptr1;
void createList(int num);
void Print();
void del_after_key(int key);

void initialize(){
    header=(struct Node*)malloc(sizeof(struct Node));
    header->link=NULL;
}


int main()
{
    
    
    initialize();
    int num=0,i,val=0,n,key;
    printf("Enter the number of items");
    scanf("%d",&val);
    printf("Enter the numbers");
    for(i=0;i<val;i++){
        scanf("%d",&num);
        createList(num);
    }
    Print();
    printf("Enter the key");
    scanf("%d",&key);
    del_after_key(key);
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
void del_after_key(int key){
    struct Node *del;
    ptr=header;
    if(ptr==NULL){
        printf("Empty list");
        exit(0);
    }
    while(ptr->link!=NULL && ptr->data!=key){
        ptr1=ptr;
        ptr=ptr->link;
    }
    del=ptr->link;
    ptr->link=del->link;
    free(del);
    
}
