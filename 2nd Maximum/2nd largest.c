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

    int mx1=-1,mx2=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>mx1)
            mx1=arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>mx2 && arr[i]<mx1)
            mx2=arr[i];
    }
    printf("Maximum:%d\n2nd Maximum:%d\n",mx1,mx2);
}
