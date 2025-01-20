#include<stdio.h>
int sum(int x)
{
    if(x>0){
        return x+sum(x-1);
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter the element:");
    scanf("%d",&n);

    int result=sum(n);
    printf("%d",result);
}
