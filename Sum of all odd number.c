#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the element:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==1){
            sum=sum+i;
        }
    }
    printf("The sum is:%d",sum);
}

