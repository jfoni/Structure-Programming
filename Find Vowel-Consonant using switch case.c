#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of letters: ");
    scanf("%d", &t);

    while (t--) {
        char T;
        printf("Enter a letter: ");
        scanf(" %c", &T); 

        if (T == 'A' || T == 'E' || T == 'I' || T == 'O' || T == 'U' ||
            T == 'a' || T == 'e' || T == 'i' || T == 'o' || T == 'u') {
            printf("%c is a vowel\n", T);
        } else {
            printf("%c is a consonant\n", T);
        }
    }

}
