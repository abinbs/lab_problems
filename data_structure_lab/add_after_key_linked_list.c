#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *link;
}*header,*ptr,*temp;
void createList(int num);
void Print();
void add_key(int n,int key);

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
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the key after which insertion should take");
    scanf("%d",&key);
    add_key(n,key);
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
void add_key(int n,int key){
    
    ptr=header;
    while(ptr->link!=NULL && ptr->data!=key){
        ptr=ptr->link;
    }
    if(ptr->link==NULL){
        printf("No key value found; Unsuccesfull");
        exit(1);
    }
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL){
        printf("Memory Insufficient ");
        exit(0);
    }
    temp->data=n;
    temp->link=ptr->link;
    ptr->link=temp;
    
}
