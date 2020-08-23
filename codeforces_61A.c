#include <stdio.h>

int main()
{
    char s1[102], s2[102], i = 0;
    scanf("%s%s", s1, s2);

    while(s1[i]){
        if(s1[i] + s2[i] == 98)
            printf("%c", s1[i] + s2[i] - 50);

        else
            printf("%c", s1[i] + s2[i] - 48);

        i++;
    }

    return 0;
}
