#include<stdio.h>

void towerOfHanoi(int n,char A,char B,char C){
    if(n==1){
        printf("\nmove disk from %c to %c",A,B);
    }else{
        towerOfHanoi(n-1,A,C,B);
        towerOfHanoi(1,A,B,C);
        towerOfHanoi(n-1,C,B,A);
    }
}

int main(){
    int n;
    printf("enter the number of disks: ");
    scanf("%d",&n);

    towerOfHanoi(n,'S','D','T');
}