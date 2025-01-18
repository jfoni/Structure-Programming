#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            for(int j=n;j>i;j--){
                printf("* ");
            }
            printf("\n");
    }
}




