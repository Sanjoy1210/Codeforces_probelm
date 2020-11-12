#include <stdio.h>

int main()
{
    int n, *p, min, max;
    scanf("%d", &n);
    int ara[n];
    p = ara;

    min = max = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", p + i);

        if(*(p + i) > max){
            max = *(p + i);
        }
    }

    for (int i = 0; i < n; i++){
        min += (max - *(p + i));
    }

    printf("%d\n", min);

    return 0;
}
