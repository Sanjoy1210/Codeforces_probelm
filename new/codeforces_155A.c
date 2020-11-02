#include <stdio.h>
#include <stdlib.h>

#define DEBUG 0

int main()
{
    int n, points, best, worst, count = 0, i = 2;
    scanf("%d", &n);
    scanf("%d", &points);
    best = worst = points;

    if(DEBUG) printf("----\nDEBUG\n\tPoints = %d\nENDDEBUG\n----\n", points);

    while(n > 1){
        scanf("%d", &points);

        if(DEBUG) printf("----\nDEBUG\n\tPoints = %d\nENDDEBUG\n----\n", points);

        if(best < points){
            best = points;
            count++;
            if(DEBUG) printf("----\nDEBUG\n\tBest = %d\nENDDEBUG\n----\n", best);
        }
        if(worst > points){
            worst = points;
            count++;
            if(DEBUG) printf("----\nDEBUG\n\tWorst = %d\nENDDEBUG\n----\n", worst);
        }
        n -= 1;
    }
    printf("%d\n", count);

    return 0;
}
