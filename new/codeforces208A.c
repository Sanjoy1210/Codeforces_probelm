#include <stdio.h>

int main()
{
    char song[202];
    scanf("%s", song);

    for(int i = 0; song[i] != '\0'; i++){
        if(song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B'){
            printf(" ");
            i += 2;
        }
        else{
            printf("%c", song[i]);
        }
    }

    return 0;
}
