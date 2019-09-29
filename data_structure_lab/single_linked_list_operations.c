#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
//#include<process.h>  not needed for online compiler
struct node{
	int data;
	struct node* link;
}*header,*ptr,*temp,*ptr1;
void add_beg();
void add_end();
void add_after_key();
void del_beg();
void del_end();
void del_after_key();
void Print();
void initialise(){
	header=(struct node*)malloc(sizeof(struct node));
	header->link=NULL;
}
void main(){
	int num,i,n,ch,key;
	//clrscr();
	initialise();

	 while(1){
	 printf("\nEnter the choices \n 1.add beg\n2.add end\n3.add after key\n4.del beg\n5.del end\n6.del after key\n0. Exit\n");
	 scanf("%d",&ch);

	 switch(ch){
		case 1:
		add_beg(n);
		break;
		case 2:
		add_end();
		break;
		case 3:
		add_after_key();
		break;
		case 4:del_beg();
		break;
		case 5:del_end();
		break;
	    case 0:exit(0);
	    case 6:del_after_key();
	    break;
		default: printf("Wrong Choice");
	 }
       }
//getch();
}

void Print(){
	ptr=header->link;
	printf("List is: ");
	while(ptr!=NULL){
		printf(" %d",ptr->data);
		ptr=ptr->link;
	}
}
void add_beg(){
	int n;
	ptr=header;
	printf("Enter the value to be added\n");
	scanf("%d",&n);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->link=header->link;
	header->link=temp;
	Print();
}
void add_end(){
    int n;
	    ptr=header;
	printf("Enter the value to be added\n");
	scanf("%d",&n);
	temp=(struct node*)malloc(sizeof(struct node));
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	temp->data=n;
	temp->link=NULL;
	ptr->link=temp;
	Print();
}
void add_after_key(){
    int n,key;
	    ptr=header;
	printf("Enter the value to be added\n");
		scanf("%d",&n);
		printf("Enter the key");
		scanf("%d",&key);
	temp=(struct node*)malloc(sizeof(struct node));
	while(ptr->link!=NULL && ptr->data!=key){
		 ptr=ptr->link;
	}
	if(ptr->data==key){
	temp->data=n;
	temp->link=ptr->link;
	ptr->link=temp;
	Print();
	}
	else{
	    printf("key not found");
	}
}
void del_beg(){
	if(header->link==NULL){
		printf("No nodes");
	}
	else{
	ptr=header->link;
	header->link=ptr->link;
	free(ptr);
	Print();
	}
}
void del_end(){
    ptr=header;
    if(header->link==NULL){
        printf("No nodes");
    }
    else{
    while(ptr->link!=NULL){
        ptr1=ptr;
        ptr=ptr->link;
    }
    ptr1->link=NULL;
    free(ptr);
    Print();
    }
}
void del_after_key(){
	int key;
	ptr1=header;
	ptr=ptr1->link;
	printf("Enter the key");
	scanf("%d",&key);
	while(ptr!=NULL){
		if(ptr->data!=key){
			ptr1=ptr;
			ptr=ptr->link;
		}
		else{
			ptr1->link=ptr->link;
			free(ptr);
			Print();
			break;
		}
	}
	if(ptr==NULL){
		printf("Key not found");
	}
}
