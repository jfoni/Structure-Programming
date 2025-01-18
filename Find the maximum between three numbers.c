#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the elements:");
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    if(a>b && a>c){
        max=a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }
    printf("Maximum number is %d\n",max);
}

