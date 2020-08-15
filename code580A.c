#include <stdio.h>

void countProgress(int a[], int b)
{
    int count = 0, referenceNumber, max = 0;

    for(int i = 0; i < b; i++) {

        if(a[i] >= referenceNumber) count++;
        else count = 1;
        if(count > max) max = count;
        referenceNumber = a[i];
    }

    printf("%d\n", max);

    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    countProgress(ara, n);
    return 0;
}