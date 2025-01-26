#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int mx=-1,mn=9999;

    for(int i=0;i<size;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }

     for(int i=0;i<size;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    }

    printf("Maximum %d,Minimum %d ",mx,mn);

}
