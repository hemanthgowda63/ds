#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int top=-1;

void push(int val){
    if(top==max-1){
        printf("\nstack overflow\n");
        return;
    }
    top++;
    stack[top]=val;
    printf("%d inserted successfully\n",val);
}

void pop(){
    if(top==-1){
        printf("\nstack underflow\n");
        return;
    }
    top--;
    printf("%d removed successfully\n",stack[top+1]);
}

void display(){
    if(top==-1){
        printf("\nthere is nothing to display");
        return;
    }
    printf("\ncontents of stack are: ");
    for(int i=top;i>=0;i--){
        printf("%d\t",stack[i]);
    }
}

int main(){
    int option;
    int val;
    do{
        printf("\n enter your ooption: ");
        scanf("%d",&option);

        switch(option){
            case 1:printf("enter the value: ");
                scanf("%d",&val);
                push(val);
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            default:exit(0);
        }
    }while(option < 4);
    return 0;
}