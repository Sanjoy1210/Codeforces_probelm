#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, p, a;
    scanf("%d", &n);
    bool ara[105];

//    for(int i = 0; i <= n; i++){
//        ara[i] = 0;
//    }
    scanf("%d", &p);
    for(int i = 1; i <= p; i++){
        scanf("%d", &a);
        ara[a] = 1;
    }
    scanf("%d", &p);
    for(int i = 1; i <= p; i++){
        scanf("%d", &a);
        ara[a] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(ara[i] != 1){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");

    return 0;
}
