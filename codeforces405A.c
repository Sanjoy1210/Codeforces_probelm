#include <stdio.h>

void selection_sort(int a[], int x)
{
    int indx_min, temp;

    for(int i = 0; i < x; i++){
        indx_min = i;

        for(int j = i + 1; j < x; j++){
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

int main()
{
    int n;
    scanf("%d", &n);
    int col[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &col[i]);
    }

    selection_sort(col, n);

    for(int i = 0; i < n; i++){
        printf("%d ", col[i]);
    }

    return 0;
}
