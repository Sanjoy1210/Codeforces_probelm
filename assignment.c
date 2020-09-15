#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char str1[100];
    char str2[100];

    scanf("%[^\n]", str1);
    scanf(" %[^\n]", str2);

    for(int i = 0; str1[i]; i++){
        str1[i] = tolower(str1[i]);
    }

    for(int i = 0; str2[i]; i++){
        str2[i] = tolower(str2[i]);
    }

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count = 0;

    if(len1 > len2){
        for(int i = 0; i < len1; i++){
            if(str2[i] == str1[i]){
                count++;
            }
        }
    }

    else{
        for(int i = 0; i < len2; i++){
            if(str2[i] == str1[i]){
                count++;
            }
        }
    }

    if(count != 0) printf("%d patterns matched\n", count);
    else printf("No patterns matched\n");
    return 0;
}
