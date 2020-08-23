#include <stdio.h>

int main()
{
    int n, a, one, two, three, four, count;
    one = two = three = four = count = 0;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &a);

        if(a == 1) {
            one++;
        }
        if(a == 2){
            two++;
        }
        if(a == 3){
            three++;
        }
        if(a == 4){
            four++;
        }
    }

    count = four;

    while(one != 0 && three != 0) {
        count += 1;
        three--;
        one--;
    }

    if(one == 0 && three != 0){
        count += three;
        three = 0;
    }

    count += two / 2;

    if(two % 2 != 0){
        if(one <= 2){
            count += 1;
            one = 0;
            two = 0;
        }
        else{
            count += 1;
            one -= 2;
            two = 0;
        }
    }

    if(one != 0) {
        count += one / 4;

        if(one % 4 != 0) {
            count += 1;
        }
    }

    printf("%d\n",count);

    return 0;
}
