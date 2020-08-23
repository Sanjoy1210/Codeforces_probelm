#include <stdio.h>

int main()
{
    int n, i = 0, a, m;
    scanf("%d", &n);
    m = n;
    while(n--){
        scanf("%d", &a);
        if(a == 0){
            i++;
        }
    }
    if(i == m){
        printf("EASY\n");
    }
    else{
        printf("HARD\n");
    }

    return 0;
}
