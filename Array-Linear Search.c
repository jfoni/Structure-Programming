#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size],target,temp=0;
    printf("Enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the search element:");
    scanf("%d",&target);
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            temp++;
            break;
        }
    }
    if(temp==1){
        printf("%d is present\n",target);
    }
    else{
        printf("%d is absent\n",target);
    }
}
