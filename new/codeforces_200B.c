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
    ans = (ans / t) * 100.0;
    printf("%.6f\n", ans);

    return 0;
}
