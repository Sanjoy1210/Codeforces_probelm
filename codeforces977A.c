#include <stdio.h>

int main()
{
    int n, k, i, temp;

    scanf("%d %d", &n, &k);

    for(i = 1; i <= k; i++){
        temp = n % 10;
        if(temp != 0){
            n--;
        }
        else{
            n /= 10;
        }
    }

    printf("%d\n", n);

    return 0;
}