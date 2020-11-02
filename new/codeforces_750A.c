#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int minute, count;

    minute = count = 0;

    for(int i = 1; i <= n; i++){
        minute += (i * 5);
        if(k <= 240 - minute) count++;
    }

    printf("%d\n", count);

    return 0;
}
