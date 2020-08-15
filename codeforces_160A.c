// author name: Sanjoy Paul

#include <stdio.h>

void selection_sort(int coins[], int n)
{
    int i, j, index_min, temp;

    for(i = 0; i < n - 1; i++){

        // asume the minimum number is zero th element of array
        index_min = i;

        // compare the first element with index_min element
        for(j = i + 1; j < n; j++){
            if(coins[j] < coins[index_min]){
                index_min = j;
            }
        }

        // interchange the value with each other
        if(index_min != i){
            temp = coins[i];
            coins[i] = coins[index_min];
            coins[index_min] = temp;
        }
    }

    return;
}

int countCoinSumFromSort(int coins[], int n, int nThCoinSum)
{
    int i, sum = 0, count = 0;

    // count the sum of the sort number of the array
    for(i = n - 1; i >= 0; i--){
        sum += coins[i];

        // break when we get the sum is greater
        if(sum > (nThCoinSum - sum)){
            count++;
            break;
        }
        count++;
    }

    return count;
}

int main()
{
    int n, i, nThCoinSum = 0, minCoinSum, count = 0;

    scanf("%d", &n);

    int coins[n];

    // take input & count the sum of n th element of the array
    for(i = 0; i < n; i++){
        scanf("%d", &coins[i]);

        nThCoinSum += coins[i];
    }

    // selection sort the array element
    selection_sort(coins, n);

    // half of the n the coins sum
    // compair of minimum coins sum

    // count the sum of sort number and compare with the nThCoinSum
    minCoinSum = countCoinSumFromSort(coins, n, nThCoinSum);

    printf("%d\n", minCoinSum);

    return 0;
}