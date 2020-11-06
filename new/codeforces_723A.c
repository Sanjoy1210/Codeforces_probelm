#include <stdio.h>

int main()
{
    int x1, x2, x3, temp;
    scanf("%d %d %d", &x1, &x2, &x3);
    int distance;

    if(x1 > x2){
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if(x2 > x3){
        temp = x2;
        x2 = x3;
        x3 = temp;
    }
    if(x1 > x2){
        temp = x1;
        x1 = x2;
        x2 = temp;
    }

    distance = (x3 - x2) + (x2 - x1);

    printf("%d\n", distance);
    return 0;
}
