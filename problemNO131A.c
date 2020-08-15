#include <stdio.h>
#include <string.h>

void changeCharacter(char line[])
{
    int i, capital = 0, lower = 0;

    for(i = 1; line[i] != '\0'; i++){
        if(line[i] >= 'a' && line[i] <= 'z'){
            lower++;
        }
    }

    for(i = 0; line[i] != '\0'; i++) {
        if(line[i] >= 'A' && line[i] <= 'Z'){
            capital++;
        }
    }

    if((line[0] >= 'a' && line[0] <= 'z') && lower == 0){

        if(line[0] >= 'a' && line[0] <= 'z'){
            line[0] = 'A' + (line[0] - 'a');
        }

        for(i = 1; line[i] != '\0'; i++) {
            if(line[i] >= 'A' && line[i] <= 'Z'){
                line[i] = 'a' + (line[i] - 'A');
            }
            else line[i] = line[i];
        }

        printf("%s\n", line);
    }

    else if(capital != 0 && lower == 0) {
        for(i = 0; line[i] != '\0'; i++){
            if(line[i] >= 'A' && line[i] <= 'Z'){
                line[i] = 'a' + (line[i] - 'A');
            }
        }
        printf("%s\n", line);
    }

    else{
        printf("%s\n", line);
    }
    
    return;
}

int main()
{
    char word[102];
    int i;
    scanf("%s", word);
    changeCharacter(word);
    return 0;
}