#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selection_sort(int ara[], int len)
{
    int i, index_min, j, temp;

    for(i = 0; i < len - 1; i++) {
        index_min = i;

        for(j = i + 1; j < len; j++) {
            if (ara[j] < ara[index_min]) {
                index_min = j;
            }
        }

        if (index_min != i) {
            temp = ara[i];
            ara[i] = ara[index_min];
            ara[index_min] = temp;
        }
    }

    for (i = 0; i < len; i++) {
        printf("%d ", ara[i]);
    }

    return;
}

int main()
{
    int ara[] = {9, 3, 4, 2, 8, 7, 5, 1, 6};

    int len = sizeof(ara) / sizeof(ara[0]);

    selection_sort(ara, len);
    return 0;
}
