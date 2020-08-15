#include <stdio.h>
#include <string.h>

char to_upper(char ch)
{
    return ch & 95;
}

char to_lower(char ch)
{
    return ch | 32;
}

int main()
{
    char word[102];
    scanf("%s", word);
    int i, upperCaseCount = 0, lowerCaseCount = 0;

    for(i = 0; word[i] != '\0'; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            upperCaseCount += 1;
        }

        else {
            lowerCaseCount += 1;
        }
    }

    if(upperCaseCount > lowerCaseCount) {
        for(i = 0; word[i] != '\0'; i++) {
            printf("%c", to_upper(word[i]));
        }
    }

    else {
        for(i = 0; word[i] != '\0'; i++) {
            printf("%c", to_lower(word[i]));
        }
    }

    printf("\n");

    return 0;
}