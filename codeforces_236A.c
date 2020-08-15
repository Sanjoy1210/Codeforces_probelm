#include <stdio.h>
#include <string.h>

void find_gender(char gender[])
{
    int i, j, count = 0;
    char temp;
    
    for(i = 0; gender[i] != '\0'; i++){
        for(j = i + 1; gender[j] != '\0'; j++){
            if(gender[i] > gender[j]){
                temp = gender[i];
                gender[i] = gender[j];
                gender[j] = temp;
            }
        }
    }
    
    for(i = 0; gender[i] != '\0'; i++){
        if(gender[i] != gender[i + 1]){
            count++;
        }
    }

    if((count & 1) == 0){
        printf("CHAT WITH HER!\n");
    }

    else{
        printf("IGNORE HIM!\n");
    }

    return;
}

int main()
{
    char name[102];

    scanf("%s", name);

    find_gender(name);

    return 0;
}