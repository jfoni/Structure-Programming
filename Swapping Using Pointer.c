#include<stdio.h>
void pointer(int a,int b)
{
    int *x=&a,*y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After Swapping:%d %d\n",*x,*y);
}
int main()
{
    int a,b;
    printf("Enter the value:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping:%d %d\n",a,b);
    pointer(a,b);
}
