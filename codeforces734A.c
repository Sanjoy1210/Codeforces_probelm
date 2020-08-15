#include <stdio.h>

int main()
{
    int n, countA, countD;
    scanf("%d", &n);
    char game[n];
    countA = countD = 0;

    scanf(" %[^\n]", game);

    for(int i = 0; game[i] != '\0'; i++){
        if(game[i] == 'A') countA++;
        else countD++;
    }

    if(countA > countD) printf("Anton\n");
    else if(countA < countD) printf("Danik\n");
    else printf("Friendship\n");

    return 0;
}