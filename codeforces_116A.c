#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, a, b, result, capacity = 0, min = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);

        result = b - a;
        capacity += result;
        if(capacity > min) min = capacity;
    }
    printf("%d\n", min);

    return 0;
}