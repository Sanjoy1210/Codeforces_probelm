#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

long long find_maximum(int a[], int x);


int main()
{
    int t, n;
    long long k;
    scanf("%d", &t);

    while(t--){
        scanf("%d %lld", &n, &k);
        unsigned long long ara[n], max = 0;

        for(int i = 0; i < n; i++){
            scanf("%lld", &ara[i]);
        }

        max = find_maximum(ara, n);
        //printf("max = %lld\n", max);

        long long large = 0;
        for(int i = 0; i < n; i++){
            ara[i] = max - ara[i];
        }

        large = find_maximum(ara, n); //printf("large = %lld\n", large);

        k--;
        if(k & 1){
            for(int i = 0; i < n; i++){
                ara[i] = large - ara[i];
            }
        }

        //printf("%lld", ara[0]);
        for(int i = 0; i < n; i++){
            printf("%llu ", ara[i]);
        }
        printf("\n");
    }

    return 0;
}

long long find_maximum(int a[], int x) {
    long long max;

    max = a[0];

    for (int i = 1; i < x + 1; i++) {
        if (a[i] > max) {
           max = a[i];
        }
    }

    return max;
}
