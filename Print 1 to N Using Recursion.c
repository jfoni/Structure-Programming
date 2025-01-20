#include<stdio.h>
void re(int n,int i)
{
    if(n<i){
        return;
    }
    else{
        printf("%d ",i);
        return re(n,i+1);
    }
}
int main()
{
    int n;
    printf("Enter the element:");
    scanf("%d",&n);
    re(n,1);
}
