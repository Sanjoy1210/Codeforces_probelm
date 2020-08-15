// author name: Sanjoy Paul

#include <stdio.h>

int main()
{
    int n, count = 0, temp;
    scanf("%d", &n);

    if(n <= 5){
        n = n / n;
        count += n;
    }

    else{
        temp = n % 5;
        n = n / 5;

        if(temp == 0){
            count += n;
        }
        else{
            count += n + 1;
        }
    }

    printf("%d\n", count);

    return 0;
}