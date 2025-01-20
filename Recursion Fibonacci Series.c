#include<stdio.h>
int main()
{
    int m;
    printf("Enter the element:");
    scanf("%d",&m);
    printf("%d %d ",0,1);
    fibo(m-2,0,1);
}
void fibo(int m,int m1,int m2)
{
    if(m>0){
        int m3;
        m3=m1+m2;
        printf("%d ",m3);
        fibo(m-1,m2,m3);
    }
}
