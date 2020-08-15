#include <stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);

    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0){
        printf("YES\n");
    }

    else{
        temp = n % 10;
        n = n / 10;
        temp = n % 10;
        n = n / 10;
        if((temp == 4 || temp == 7) && (n == 4 || n == 7)){
            printf("YES\n");
        }
        else printf("NO\n");
    }

    return 0;
}