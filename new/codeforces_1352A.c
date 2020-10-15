#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n;
    scanf("%d", &t);


    while(t--){
        scanf("%d", &n);

        int i = 1, count = 0;
        int ara[1000];

        while(n){
            if(n % 10){
                ara[count++] = n % 10 * i;
            }
            i *= 10;
            n = n / 10;
        }
        printf("%d\n", count);
        for(int j = 0; j < count; j++){
            printf("%d ", ara[j]);
        }
        printf("\n");
    }

    return 0;
}
