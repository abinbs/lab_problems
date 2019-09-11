#include<stdio.h>
#include <conio.h>

void main(){

	int beg,end,mid,num,key,i,j,a[20],flag=0;

	printf("Enter the no of elements in the array:");
	scanf("%d",&num);

	beg=0;
	end=num-1;

	for(i=0;i<num;i++){
		printf("Enter:");
		scanf("%d",&a[i]);

	}

	printf("Enter the element to be searched:");
	scanf("%d",&key);

	while(end>=beg){
		mid=(beg+end)/2;
		if(a[mid] == key)
		{
			flag=1;
			break;
		}
		if(key<a[mid]){
			end=mid-1;
			}
		if(key > a[mid]){
			beg=mid+1;
			}
		}

	if(flag)
		printf("element found");
	else
		printf("Element not found");
	getch();
	clrscr();
	}

