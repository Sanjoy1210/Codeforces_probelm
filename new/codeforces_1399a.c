#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int comp(const void * a, const void * b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int ara[n];
        bool ok = true;

        for(int i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        qsort(ara, n, sizeof(int), comp);

        for(int i = 0; i < n - 1; i++){
            if(abs(ara[i] - ara[i + 1]) > 1){
                ok = false;
                break;
            }
        }

        if(ok) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
