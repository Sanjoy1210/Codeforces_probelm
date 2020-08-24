#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t = n;
    double ans = 0.0, num;
    while(n--){
        scanf("%lf", &num);
        ans += num / 100.0;
    }
    //ans = (ans * 1.0) / t;
    printf("%.6lf\n", ((ans / t) * 100.0));

    return 0;
}
