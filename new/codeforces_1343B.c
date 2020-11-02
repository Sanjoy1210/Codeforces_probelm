#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        if(n % 4 == 0){
            printf("YES\n");

            n /= 2;

            for(int i = 0; i < n; i++){
                printf("%d ", (i + 1) * 2);
            }
            for(int i = 1; i < n; i++){
                printf("%d ", (i * 2) - 1);
            }
            printf("%d\n", (n * 3) - 1);
        }

        else printf("NO\n");
    }

    return 0;
}
