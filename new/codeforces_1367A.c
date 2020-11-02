#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        char str[110];

        scanf("%s", str);
        int len = strlen(str);
        if(len == 2) printf("%s", str);
        else{
            printf("%c", str[0]);
            for(int i = 1; i < len - 2; i+=2){
                if(str[i] == str[i + 1]) printf("%c", str[i]);
            }
            printf("%c", str[len - 1]);
        }
        printf("\n");
    }

    return 0;
}
