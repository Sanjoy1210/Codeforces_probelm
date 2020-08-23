#include <stdio.h>

int main()
{
    long long n, i, sum = 0;
    scanf("%lld", &n);

    if(n % 2 == 0) {
        sum += (n + 1)/2;
        printf("%lld\n", sum);
    }
    else{
        sum += (n + 1)/2;
        printf("-%lld\n", sum);
    }

    return 0;
}
