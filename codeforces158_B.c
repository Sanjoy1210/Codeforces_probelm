#include <stdio.h>

int main()
{
    int n, x, sum, one, two, three, four, taxi, count, count2;
    scanf("%d", &n);

    sum = one = two = three = four = count = count = taxi = 0;

    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);

        switch (x){
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            default:
                four++;
                break;
        }
    }

    taxi += four;

    if(one != 0 && three != 0) {
        count++;
        --one;
        --three;
    }

    if(two != 0) {
        if(two % 2 == 0) taxi += two / 2;
        else taxi += 1;
    }
    printf("taxi = %d, count = %d, count2 = %d\n", taxi, count, count2);
    sum += taxi + count + count2 + 1;

    printf("%d\n", sum);

    return 0;
}