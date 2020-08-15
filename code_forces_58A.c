#include <stdio.h>

int count_word(char word[])
{
    char hello[] = "hello";
    int i, countWord = 0, j;

    for(i = 0, j = 0; word[i] != '\0'; i++){
        if(word[i] == hello[j]){
            j++;
            countWord += 1;
        }
    }

    return countWord;
}

int main()
{
    char word[102];    

    scanf("%s", word);

    int count = count_word(word);

    if(count == 5) printf("YES\n");
    else printf("NO\n");

    return 0;
}