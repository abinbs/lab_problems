#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

struct node{
	int coeff;
	int expo;
	struct node* link;
};
void main(){
	char ch1,ch2,c1,c2;
	struct node *pheader,*qheader,*rheader,*pptr,*qptr,*rptr,*new;
	pheader=(struct node*)malloc(sizeof(struct node));
	qheader=(struct node*)malloc(sizeof(struct node));
	rheader=(struct node*)malloc(sizeof(struct node));
	pheader->link=NULL;
	qheader->link=NULL;
	rheader->link=NULL;
	clrscr();

	printf("\nEnter the first polynomial\n");
	pptr=pheader;
	ch1='y';
	while(ch1=='y'){
		new=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the coefficient");
		scanf("%d",&new->coeff);
		printf("\nEnter the exponent");
		scanf("%d",&new->expo);
		pptr->link=new;
		new->link=NULL;
		pptr=pptr->link;
		fflush(stdin);
		printf("\nDo you want to add more(y/n)");
		scanf("%c",&c1);
		ch1=c1;
	}
	printf("\nEnter the second polynomial\n");
	ch2='y';
	qptr=qheader;
	while(ch2=='y'){
		new=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the coefficient");
		scanf("%d",&new->coeff);
		printf("\nEnter the exponent");
		scanf("%d",&new->expo);
		qptr->link=new;
		new->link=NULL;
		qptr=qptr->link;
		fflush(stdin);
		printf("\nDo you want to add more(y/n)");
		scanf("%c",&c2);
		ch2=c2;
	}
	pptr=pheader->link;
	qptr=qheader->link;
	rptr=rheader->link;
	while(pptr!=NULL && qptr!=NULL){
		if(pptr->expo == qptr->expo){
			new=(struct node*)malloc(sizeof(struct node));
			new->coeff=pptr->coeff+qptr->coeff;
			new->expo=pptr->expo;
			rptr->link=new;
			new->link=NULL;
			pptr=pptr->link;
			qptr=qptr->link;
			rptr=rptr->link;
		}
		else if(pptr->expo > qptr->expo){
			new=(struct node*)malloc(sizeof(struct node));
			new->coeff=pptr->coeff;
			new->expo=pptr->expo;
			rptr->link=new;
			new->link=NULL;
			pptr=pptr->link;
			rptr=rptr->link;
		}
		else if(pptr->expo < qptr->expo){
			new=(struct node*)malloc(sizeof(struct node));
			new->coeff=qptr->coeff;
			new->expo=qptr->expo;
			rptr->link=new;
			new->link=NULL;
			qptr=qptr->link;
			rptr=rptr->link;
		}
	}
	if(pptr!=NULL && qptr==NULL){
		while(pptr!=NULL){
			new=(struct node*)malloc(sizeof(struct node));
			new->coeff=pptr->coeff;
			new->expo=pptr->expo;
			rptr->link=new;
			new->link=NULL;
			pptr=pptr->link;
			rptr=rptr->link;
		}
	}
	if(pptr==NULL && qptr!=NULL){
		while(qptr!=NULL){
			new=(struct node*)malloc(sizeof(struct node));
			new->coeff=qptr->coeff;
			new->expo=qptr->expo;
			rptr->link=new;
			new->link=NULL;
			qptr=qptr->link;
			rptr=rptr->link;
		}
	}

	pptr=pheader->link;
	qptr=qheader->link;
	rptr=rheader->link;
	printf("\nP(x)=");
	while(pptr!=NULL){
		printf("(%d x^ %d)+",pptr->coeff,pptr->expo);
		pptr=pptr->link;
	}
	printf("\nQ(x)=");
	while(qptr!=NULL){
		printf("(%d x^ %d)+",qptr->coeff,qptr->expo);
		qptr=qptr->link;
	}
	printf("\nP(x) + Q(x)=");
	while(rptr->link!=NULL){
		rptr=rptr->link;
		printf("(%d x^ %d)+",rptr->coeff,rptr->expo);
	       
	}
	getch();
}
