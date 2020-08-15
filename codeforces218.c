#include <stdio.h>
#include <string.h>
#include <wctype.h>

int main()
{
    char a[102], b[102];
    int i, len;

    scanf("%s %s", a, b);

    len = strlen(a);

    for(i = 0; i < len; i++){
        a[i] = towlower(a[i]);
        b[i] = towlower(b[i]);
    }

    int result = strcmp(a, b);

    if(result == 0) printf("%d\n", result);
    if(result > 0) printf("%d\n", result);
    if(result < 0) printf("%d\n", result);

    return 0;
}