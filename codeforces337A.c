#include <stdio.h>
#include <stdlib.h>

void selection_sort(int a[], int p)
{
    int temp, indx_min, i, j;
    for(i = 0; i < p - 1; i++){
        indx_min = i;
        for(j = i + 1; j < p; j++){
            if(a[j] < a[indx_min]){
                indx_min = j;
            }
        }

        if(indx_min != i){
            temp = a[i];
            a[i] = a[indx_min];
            a[indx_min] = temp;
        }
    }
}

int minimum(int a, int b)
{
    int min;
    return min = (a < b) ? a : b;
}

int main()
{
    int n, m, ans, min;
    scanf("%d %d", &n, &m);
    //4 6
    //10 12 10 7 5 22
    int ara[m];

    for(int i = 0; i < m; i++){
        scanf("%d", &ara[i]);
    }

    selection_sort(ara, m);
//
//    for(int i = 0; i < m; i++){
//        printf("%d ", ara[i]);
//    }

    min = abs(ara[0] - ara[n - 1]);

    for(int i = n; i <= m; i++){
        ans = abs(ara[i - 1] - ara[i - n]);
        min = minimum(min, ans);
    }

    printf("%d\n", min);

    return 0;
}
