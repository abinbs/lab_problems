#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str[20],nstring[20];
	int len,i,j=0;;
	clrscr();
	printf("Enter a string:");
	gets(str);
	len = strlen(str);
	for(i = len-1 ;i>=0;i--){

		nstring[j] = str[i];
		j++;
	}
        nstring[len] = '\0';
	printf("String after reversal::: ");
	puts(nstring);
	getch();
	return(0);


}
