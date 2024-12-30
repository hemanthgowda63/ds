#include<stdio.h>
#define max 5

int queue[max];
int f=0;
int r=-1;

void insert(int val){
    if(r==max-1){
        printf("\n queue overflow\n");
        return;
    }
    r++;
    queue[r]=val;
    printf("\n%d inserted successfully\n",val);
}

void delete(){
    if(f>r){
        printf("\nqueue underflow\n");
        return;
    }
    printf("\n%d deleted successfully\n",queue[f]);
    f++;
}

void display(){
    if(r==-1){
        printf("\nqueue underflow\n");
        return;
    }
    printf("\ncontents of queue are: ");
    for(int i=f;i<=r;i++){
        printf("%d\t",queue[i]);
    }
    printf("\n");
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
                insert(val);
                break;
            case 2:delete();
                break;
            case 3:display();
                break;
            default:break;
        }
    }while(option < 4);

    return 0;
}