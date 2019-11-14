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



