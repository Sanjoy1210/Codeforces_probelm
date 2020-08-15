#include <stdio.h>

int cost_of_banana(int k, int n, int w)
{
    long bananaPrice = 0, borrow_money;

    for(int i = 1; i <= w; i++){
        bananaPrice += i * k;
    }
    
    if(bananaPrice < n) borrow_money = 0;
    else borrow_money = bananaPrice - n;

    return borrow_money;
}

int main()
{
    int n, k, w;
    long borrowMoney;
    scanf("%d %d %d", &k, &n, &w);

    borrowMoney = cost_of_banana(k, n, w);

    printf("%ld\n", borrowMoney);
    
    return 0;
}