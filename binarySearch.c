#include<stdio.h>

int binarySearch(int arr[],int target,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;

    if(target==arr[mid]){
        return mid;
    }else if(arr[mid]>target){
        return binarySearch(arr,target,start,mid-1);
    }else{
        return binarySearch(arr,target,mid+1,end);
    }
}

int main(){

    int target;
    int n;
    int val;

    printf("\nenter the size of the array: ");
    scanf(" %d",&n);

    int arr[n];

    printf("\nenter %d numbers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        arr[i]=val;
    }

    printf("enter the target element: ");
    scanf("%d",&target);

    int ans=binarySearch(arr,target,0,n-1);

    if(ans==-1){
        printf("\nSorry element not found!\n");
    }else{
        printf("\nElement found at location: %d",ans);
    }

    return 0;
}