#include <stdio.h>

void selection_sort(int coins[], int n)
{
    int i, index_min, j, temp;

    for(i = 0; i < n - 1; i++){
        index_min = i;

        for(j = i + 1; j < n; j++){
            if(coins[j] > coins[index_min]){
                index_min = j;
            }
        }

        if(index_min != i){
            temp = coins[i];
            coins[i] = coins[index_min];
            coins[index_min] = temp;
        }
    }

    return;
}

int main()
{
    int n, count = 0, i, sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    int coins[n];

    for(i = 0; i < n; i++){
        scanf("%d", &coins[i]);
        sum1 += coins[i];
    }

    sum1 = sum1 / 2;

    selection_sort(coins, n);

    for(i = n - 1; i >= 0; i--){
        sum2 += coins[i];
        count++;
        if(sum2 > sum1) break;
    }

    printf("%d\n", count);

    return 0;
}