#include<stdio.h>
//#include<conio.h>   // not needed while using an online compiler
#include<stdlib.h>
//#include<process.h>

struct node{
	int data;
	struct node* link;
}*header,*ptr,*temp,*ptr1;

void add_beg();
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
	 printf("Enter the choices \n 1.add beg\n2.Exit\n");
	 scanf("%d",&ch);

	 switch(ch){
		case 1:
		add_beg(n);

		break;
		
		case 2: exit(1);
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
	char ch,c;
	int n;
	ptr=header;
	ch='y';
	while(ch=='y'){
	printf("Enter the value to be added\n");
	scanf("%d",&n);
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("Memory insufficient");
		exit(0);
		}
	temp->data=n;
	temp->link=header->link;
	header->link=temp;
	Print();
	fflush(stdin);
    while((c = getchar()) != '\n' && c != EOF);
	printf("do you want to continue (y/n)");
	scanf("%c",&c);
	ch=c;
	}
}
