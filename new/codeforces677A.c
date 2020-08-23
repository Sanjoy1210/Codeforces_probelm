#include <stdio.h>

int main()
{
    int friends, fenceHeight, width = 0, number;
    scanf("%d %d", &number, &fenceHeight);

    while(number--){
        scanf("%d", &friends);

        if(friends <= fenceHeight){
            width += 1;
        }
        else{
            width += 2;
        }
    }

    printf("%d\n", width);

    return 0;
}
