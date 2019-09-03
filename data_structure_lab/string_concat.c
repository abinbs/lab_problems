#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
	int i,j,tmp,len1,len2;
	char a[20],b[20],c[100];
	clrscr();
	printf("Enter string 1: ");
	gets(a);
	printf("Enter string 2: ");
	gets(b);
	len1 = strlen(a);
	len2 = strlen(b);

	for(i=0;i<=len1;i++){
		c[i] = a[i];
	}

	tmp = strlen(c);

	for(j=0;j<=len2;j++){
		c[tmp] = b[j];
		tmp++;
	}
	printf("\n\nConcatinated String:::: ");
	puts(c);
	getch();
}
