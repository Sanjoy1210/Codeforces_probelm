// author name: Sanjoy Paul

#include <stdio.h>

int main()
{
    int n, t, i, j;
    scanf("%d %d", &n, &t);
    char str[n];

    scanf("%s", str);

    for(i = 0; i < t; i++){
        for(j = 0; j < n - 1; j++){
            if(str[j] == 'B' && str[j + 1] == 'G'){
                str[j] = 'G';
                str[j + 1] = 'B';
                j++;
            }
        }
    }
    printf("%s", str);

    return 0;
}