#include <stdio.h>

int main()
{
    int t, i, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }
        i = 0;
        if(ara[i] + ara[i + 1] > ara[n - 1]){
           printf("-1\n");
        }
        else{
            printf("%d %d %d\n", i+1, i+2, n);
        }
    }

    return 0;
}
