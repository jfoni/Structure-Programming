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

    int mn1=9999,mn2=9999;
    for(int i=0;i<size;i++){
        if(arr[i]<mn1)
            mn1=arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]<mn2 && arr[i]>mn1)
            mn2=arr[i];
    }
    printf("Minimum:%d\n2nd Minimum:%d\n",mn1,mn2);
}
