#include <stdio.h>
#include <conio.h>
void main()
{
	int arr[20],pos,key,num,i=0,j,flag=0;
	clrscr();
	printf("Enter the no of elements:");
	scanf("%d",&num);

	while(i<num){
		printf("Enter:");
		scanf("%d",&arr[i]);
		i++;
	}

	printf("Enter the value to be searched:");
	scanf("%d",&key);

	for(j=0;j<num;j++){

		if(arr[j] == key) // Checking whether the element is key or not
		{
			flag=1;
			pos = j+1;
			break;
		}

	}
	if(flag == 1)
		printf("Element found in the %dth position",pos);
	else
		printf("Element not found");
	getch();
}
