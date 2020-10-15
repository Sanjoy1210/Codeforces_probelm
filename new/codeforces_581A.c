#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main()
{
    int a, b, max_days, number_days;
    scanf("%d %d", &a, &b);

    if(a < b) max_days = a;
    else max_days = b;

    number_days = (MAX(a, b) - max_days) / 2;

    printf("%d %d\n", max_days, number_days);

    return 0;
}
