#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix, i, j;

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 5; j++){
            scanf("%d ", &matrix);

            if(matrix == 1){
                printf("%d\n", abs(i - 3) + abs(j - 3));
                break;
            }
        }
    }
    return 0;
}