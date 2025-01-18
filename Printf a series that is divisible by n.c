#include<stdio.h>
int main()
{
    int t,n;
    printf("Enter the element:");
    scanf("%d",&t);
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=1;i<=t;++i){
        if(i%n==0){
         printf("%d ",i);
        }

    }
}



