#include <stdio.h>

int main()
{
    int n, x, i;
    scanf("%d", &n);

    for(i = 4; i <= n; i+=2){
        x = n - i;
        if(x % 2 == 0 || x % 3 == 0) break;
    }

    printf("%d %d\n", x, i);
    return 0;
}
