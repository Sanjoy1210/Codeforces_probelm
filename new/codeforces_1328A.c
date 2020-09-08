#include <stdio.h>

int main()
{
    int t;
    long a, b, countMoves = 0;
    scanf("%d", &t);

    while(t--){
        scanf("%ld %ld", &a, &b);

        countMoves = ((a + b - 1) / b) * b;
        printf("%ld\n", countMoves - a);
    }

    return 0;
}
