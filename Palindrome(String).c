#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    printf("Enter the number of test cases:");
    scanf("%d",&t);

    while(t--){
        char str[100],rev[100];
        int length, isPalindrome=1;

        printf("Enter the string:");
        scanf("%s",str);

        length=strlen(str);

        for(int i=0;i<length;i++){
            rev[i]=str[length-i-1];
        }
        str[length]='\0';

        for(int i=0;i<length;i++){
            if(str[i] != rev[i]){
                isPalindrome=0;
                break;
            }
        }

        if(isPalindrome){
            printf("%s is a palindrome\n",str);
        }

        else{
            printf("%s is not a palindrome\n",str);
        }
    }
}
