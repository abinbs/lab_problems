#include <stdio.h>
#include<stdlib.h>

void push(int *ar,int size);
void pop(int size);
void display(int *ar,int size);
int a[100];
int top=-1;

int main()
{
    int ch,size;
    printf("Enter the size of array");
    scanf("%d",&size);
    while(1){
    printf("Press 0. Exit\n 1. Push \n 2. Pop \n 3. Display");
    scanf("%d",&ch);
    switch(ch){
        case 1: push(a,size);
                break;
        case 2: pop(size);
                break;
        case 3: display(a,size);
                break;
        case 0: exit(0);
                break;
        default: printf("Wrong Choice");
    }
    }

    return 0;
}
void push(int *ar,int size){
    int value;
    if(top==size-1){
        printf("Stack Full");
    }
    else{
        printf("Enter the value to be added: ");
        scanf("%d",&value);
        top=top+1;
        *(ar+top)=value;
    }
}
void pop(int size){
    if(top==-1){
        printf("Stack Empty");
    }
    else{
        top=top-1;
    }
}
void display(int *ar,int size){
    int i;
    for(i=top;i>=0;i--){
        printf("%d ",*(ar+i));
    }
}
