#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *link;
}*header,*ptr,*temp;
void Print();
void add_after_key();

void initialize(){
    header=(struct Node*)malloc(sizeof(struct Node));
    header->link=NULL;
}


int main()
{
    
    int ch;
    initialize();
while(1){
	 printf("Enter the choices \n 1.add after key\n2.Exit\n");
	 scanf("%d",&ch);

	 switch(ch){
		case 1:
		add_after_key();
		break;
		case 2:
		exit(1);
		default: printf("Wrong Choice");
	 }

       }
 
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
void add_after_key(){
    char ch,c;
    int n,key;
	
	ch='y';
	while(ch=='y'){
	    ptr=header;
	printf("Enter the value to be added\n");
		scanf("%d",&n);
		printf("Enter the key");
		scanf("%d",&key);
	temp=(struct node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Memory Insufficient");
		exit(0);
	}
	while(ptr->link!=NULL && ptr->data!=key){
		 ptr=ptr->link;
	}
	if(ptr->data==key){
	temp->data=n;
	temp->link=ptr->link;
	ptr->link=temp;
	Print();
	while((c = getchar()) != '\n' && c != EOF);
	printf("\n do you want to continue (y/n)");
	scanf("%c",&c);
	ch=c;
	}
	else{
	    printf("key not found");
	    break;
	}
	}

}

