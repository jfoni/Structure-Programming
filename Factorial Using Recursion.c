#include<stdio.h>
int fac(int x)
{
    if(x==0){
        return 1;
    }
    else{
        return x*fac(x-1);
    }
}

int main()
{
  int n;
  printf("Enter the element:");
  scanf("%d",&n);

  int result=fac(n);
  printf("%d",result);
}
