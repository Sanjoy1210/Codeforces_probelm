#include <stdio.h>

int main()
{
    long long n, k, a;

    scanf("%lld %lld", &n, &k);

    if(n >= 1) {
        a = n / 2;
        if(n % 2 != 0){
            a = n / 2 + 1;
        }
    }

    if(k <= a) {
        printf("%lld\n", (k * 2 - 1));
    }

    else {
        printf("%lld\n", (k - a) * 2);
    }
    return 0;
}
