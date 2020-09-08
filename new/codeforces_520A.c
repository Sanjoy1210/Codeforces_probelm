#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int countUniqueCharacters(char* str){
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    char pangram[n];
    scanf(" %[^\n]", pangram);

    // convert string tolower case
    for(int i = 0; pangram[i]; i++){
        pangram[i] = tolower(pangram[i]);
    }

    // function for count all unique characters
    count = countUniqueCharacters(&pangram);

    if(count == 26){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
