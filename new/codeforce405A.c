#include <stdio.h>

int main()
{
    int n, i, num, a = 0;
    scanf("%d", &n);
    int ara[n], ara2[n];

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    ara2[0] = ara[0];
    for(i = 0; i < n - 1; i++){
        if(ara[i + 1] <= ara2[i]){
            ara2[i] = ara[i + 1];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", ara2[i]);
    }

    return 0;
}
