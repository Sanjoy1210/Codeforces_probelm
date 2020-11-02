#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, r, i;
    scanf("%d %d", &k, &r);

    for(i = 1; i <= 10; i++){
        int temp = (k * i) % 10;
        if(temp == r || temp == 0) break;
    }
    printf("%d\n", i);

    return 0;
}
