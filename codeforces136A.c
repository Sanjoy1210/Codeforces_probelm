#include <stdio.h>

void exchangeGift(int friends[], int n)
{
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(friends[j] == i){
                printf("%d ", j + 1);
            }
        }
    }

    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int friends[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &friends[i]);
    }

    exchangeGift(friends, n);
    return 0;
}