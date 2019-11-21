//Method 1.


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack
{
  int data;
  struct stack *link;
}*top;

void dis();

void main()
{
  int ch=0;
  top->data=NULL;top->link=NULL;
  clrscr();
  printf("\nSTACK");
  printf("\n1.Push");
  printf("\n2.Pop");
  printf("\n3.Display");
  printf("\n4.Exit");

  do
  {
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:push();break;

      case 2:pop();break;

      case 3:dis();break;

      case 4:exit(0);

      default:printf("Wrong entry");
    }
  } while(ch!=4);

  getch();
}

struct stack *getdata()
{
  struct stack *temp;
  temp=(struct stack *)malloc(sizeof(struct stack));
  printf("Enter the data:");
  scanf("%d",&temp->data);
  printf("\nThe data is %d",temp->data);
  temp->link=NULL;
  return temp;
}

int push()
{
  struct stack *temp,*p;
  temp=getdata();
  if(top->link==NULL)
  {
    temp->link=NULL;
    top->link=temp;
  }
  else
  {
    temp->link=top->link;
    top->link=temp;
  }
  return 0;
}

int pop()
{
  struct stack *ptr;
  ptr=top->link;
  if(ptr==NULL)
  {  printf("\nDeletion is not posible");  }
  else if(ptr->link==NULL)
  {
    top->link=NULL;
  }
  else
  {
    top->link=ptr->link;
    free(ptr);
  }
  return 0;
}

void dis()
{
  struct stack * ptr;
  ptr=top->link;
  printf("\nThe elements are:\n");
  while(ptr!=NULL)
  {
    printf("%d  ->",ptr->data);
    ptr=ptr->link;
  }
}


//Method 2

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
}*top,*temp,*top1;

void push();
void pop();
void display();

int main(){
    int ch;
    while(1){
        printf("Enter the choice\n1.push\n2.pop\n3.display\n4.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("wrong choice");
        }
    }
}
void push(){
    int value;
    printf("Enter the value");
    scanf("%d",&value);
    if(top==NULL){
        top =(struct node *)malloc(sizeof(struct node));
        top->link=NULL;
        top->data=value;
    }
    else{
        temp=(struct node*)malloc(sizeof(struct node));
        temp->link=top;
        temp->data=value;
        top=temp;
    }
}
void pop(){
    top1=top;
    if(top1==NULL){
        printf("stack underflow");
        return;
    }
   
    else{
        top1=top1->link;
        free(top);
        top=top1;
    }
    
}
void display(){
    top1=top;
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->data);
        top1 = top1->link;
    }
 }

