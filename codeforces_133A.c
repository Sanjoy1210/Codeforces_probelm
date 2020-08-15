#include <stdio.h>
#include <string.h>

void instruction(char line[])
{
    int i, len, count = 0;

    len = strlen(line);

    for(i = 0; i < len; i++) {
        if(line[i] == 'H' || line [i] == 'Q' || line[i] == '9') {
            count += 1;
        }
    }

    if(count != 0) {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

    return;
}

int main()
{
    char line[102];
    scanf("%s", line);
    
    instruction(line);
    return 0;
}