#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping:%d %d\n",a,b);

    int temp=a;
    a=b;
    b=temp;
    printf("After Swapping:%d %d\n",a,b);
}
