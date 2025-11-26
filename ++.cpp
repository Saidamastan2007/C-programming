#include <stdio.h>

int main() {
    char S[100];
    int i, upper = 0, lower = 0, digit = 0, special = 0, space = 0;

    printf("Enter a string: ");
    scanf("%s",S);

    for (i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z')
            lower++;
        else if (S[i] >= 'A' && S[i] <= 'Z')
            upper++;
        else if (S[i] >= '0' && S[i] <= '9')
            digit++;
    }

    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    
    return 0;
}
