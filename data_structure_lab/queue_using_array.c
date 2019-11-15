
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 5
void main()
{
 int queue[n],ch=1,front=0,rear=0,i,x=n;
 clrscr();
 printf("1. insert\n2. delete\n3. display\n4. exit");
 while(ch)
 {
  printf("\nenter the choice ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
   {
    if(rear==x)
     printf("\nqueue is full");
    else
    {
     printf("\n enter the number ");
     scanf("%d",&queue[rear++]);
    }
    break;
    }
   case 2:
   {
    if(front==rear)
     printf("queue is empty");
    else
    {
     printf("\n deleted element is %d  ",queue[front++]);
     x++;
    }
    break;
   }
   case 3:
   {
    printf("\nqueue elements are\n ");
    if(front==rear)
     printf("\nqueue is empty");
    else
    {
     for(i=front;i<rear;i++)
     {
      printf("%d\n ",queue[i]);
     }
    }
    break;
   }
   case 4:
   {
    exit(0);
   }
   default:
    printf("wrong choice");
  }
 }
 getch();
}


