#include <stdio.h>

int main()
{
    int n, count, c, t, max = -1;
    scanf("%d", &n);
    
    while(n--) {
        t = c;
        scanf("%d", &c);
        if(c >= t) count++;
        else count = 1;
        if(count > max) max = count;
    }
    printf("%d\n", max);
    return 0;
}