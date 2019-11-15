#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*front=NULL,*rear=NULL;
void insert(int);
void delete();
void display();
void main()
{
 int choice,value;
 clrscr();
 while(1)
 {
  printf("Enter your choice\n1.insert\n2.delete\n3.display\n4.exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    printf("\n enter the value to be inserted");
    scanf("%d",&value);
    insert(value);
    break;
   }
   case 2:
   {
    delete();
    break;
   }
   case 3:
   {
    display();
    break;
   }
   case 4:
    exit(0);
   default :
    printf(" wrong choice");
   }
  }
  getch();
 }
void insert(int value)
{
 struct Node *newNode;
 newNode=(struct Node*)malloc(sizeof(struct Node));
 newNode->data=value;
 newNode->next=NULL;
 if(front==NULL)
  front=rear=newNode;
 else
 {
  rear->next=newNode;
  rear=newNode;
 }
}
void delete()
{
 if(front==NULL)
  printf("\nqueue is empty");
 else
 {
  struct Node *temp=front;
  front=front->next;
  printf("\n deleted elment is %d\n",temp->data);
  free(temp);
 }
}
void display()
{
 if(front==NULL)
  printf("\nqueue is empty");
 else
 {
  struct Node *temp=front;
  while(temp->next !=NULL)
  {
   printf("%d->",temp->data);
   temp=temp->next;
  }
  printf("%d->NULL\n",temp->data);
 }
}
