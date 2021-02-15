#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],sub[20];
    int count1=0,count2=0,i,j,flag;

    clrscr();

    printf("enter the main string:\n");
    gets(str);

    printf("enter substring:\n");
    gets(sub);

    count1 = strlen(str); //Counting length
    count2 = strlen(sub);

    for(i=0;i<=count1-count2;i++)
     {       flag=1;

	for(j=i;j<i+count2;j++)
	 {
	     if(str[j]!=sub[j-i])
	     {
		 flag=0;
		 break;
	     }
	 }

	  if(flag==1)
	     break;
    }
       if(flag==1)

	    printf("substring present");
       else
	    printf("substring not present");
   getch();
   }
