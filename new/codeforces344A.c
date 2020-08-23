#include <stdio.h>

int main()
{
    int n, magnet, i = 0, group = 0;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &magnet);
        if(magnet == i) continue;
        else{
            group++;
            i = magnet;
        }
    }

    printf("%d\n", group);

    return 0;
}
