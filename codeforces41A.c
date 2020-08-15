#include <stdio.h>
#include <string.h>

void translatorWord(char s[], char t[])
{
    int i, count = 0, len, j, notMatchLetter = 0;

    len = strlen(s);
    for(i = len - 1, j = 0; i >= 0; i--, j++) {
        if (t[j] == s[i]) {
            count += 1;
        }

        else {
            notMatchLetter += 1;
        }
    }

    if(count != 0 && notMatchLetter == 0) {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

    return;
}

int main()
{
    char s[102];
    char t[102];
    
    scanf("%s", s);
    scanf(" %[^\n]", t);

    translatorWord(s, t);
    
    return 0;
}