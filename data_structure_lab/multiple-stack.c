#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a[50];
int top1=-1;
int size=50;
int top2=49;


void push1(int *ar);
void push2(int *ar);
void pop1();
void pop2();
void display1(int *ar);
void display2(int *ar);
void main(){
	int ch;
	clrscr();


	while(1){
		printf("\n Enter 1.Push to a\n 2.Push to b\n 3.Pop from a\n 4.Pop frm b\n 5.Display a\n 6.Display b\n 0.Exit");
		scanf("%d",&ch);
		switch(ch){
			case 1:push1(a);
				break;
			case 2:push2(a);
				break;
			case 3:pop1();
				break;
			case 4:pop2();
				break;
			case 5:display1(a);
				break;
			case 6:display2(a);
				break;
			case 0:exit(0);
				break;
			default: printf("\nWrong Choice");
		}
	}
	getch();
}
void push1(int *ar){
	int value;
	if(top1>top2-1){
		printf("\nStack Overflow");
	}
	else{
		printf("\nEnter the value ");
		scanf("%d",&value);
		top1=top1+1;
		*(ar+top1)=value;
	}
}
void push2(int *ar){
	int value;
	if(top2<top1-1){
		printf("\nStack Overflow");
	}
	else{
		printf("\nEnter the value ");
		scanf("%d",&value);
		top2=top2-1;
		*(ar+top2)=value;
		
	}
}
void pop1(){
	if(top1==-1){
		printf("\nStack Underflow");
	}
	else{
		top1=top1-1;
	}
}
void pop2(){
	if(top2==49){
		printf("\nStack Underflow");
	}
	else{
		top2=top2-1;
	}
}
void display1(int *ar){
	int i;
	for(i=top1;i>=0;i--){
		printf("%d ",*(ar+i));
	}
}
void display2(int *ar){
	int i;
	
	for(i=top2;i<=48;i++){
		printf("%d ",*(ar+i));
	}
}
