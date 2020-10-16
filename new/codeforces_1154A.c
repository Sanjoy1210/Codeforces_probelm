#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)
#define SWAP(a, b) {    \
                a ^= b; \
                b ^= a; \
                a ^= b; \
        }

int comparefunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int a, b, c;
    int ara[5];

    for(int i = 0; i < 4; i++){
        scanf("%d", &ara[i]);
    }

    qsort(ara, 4, sizeof(int), comparefunc);

    a = ara[3] - ara[0];
    b = ara[3] - ara[1];
    c = ara[3] - ara[2];

    printf("%d %d %d\n", a, b, c);

    return 0;
}
