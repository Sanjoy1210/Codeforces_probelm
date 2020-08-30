#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
//    freopen("level_in.txt", "r", stdin);
//    freopen("level_out.txt", "w", stdout);


    int n, p, a;
    scanf("%d", &n);
    bool ok[105];

    scanf("%d", &p);
    while(p--){
        scanf("%d", &a);
        ok[a] = true;
    }

    scanf("%d", &p);
    while(p--){
        scanf("%d", &a);
        ok[a] = true;
    }

    for(int i = 1; i <= n; i++){

        if(!ok[i]){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");

    return 0;
}
