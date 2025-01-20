#include<stdio.h>
int main()
{
    int n,next,pre1=0,pre2=1;
    printf("Enter the element:");
    scanf("%d",&n);

    printf("%d %d ",pre1,pre2);

    for(int i=3;i<=n;i++){
        next=pre1+pre2;
        printf("%d ",next);
        pre1=pre2;
        pre2=next;
    }
}

