#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    switch(age>=18)
    {
    case 1:
        printf("You are a Voter\n");
        break;

    case 0:
        printf("You are a Non-Voter\n");
        break;
      
    default:
        printf("Invalid output\n");
        break;
    }
}





