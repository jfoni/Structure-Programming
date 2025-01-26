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

    int fac=1;
    for(int i=0;i<size;i++){
        fac*=arr[i];
    }
    printf("The fac:%d",fac);
}
