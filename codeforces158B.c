#include <stdio.h>

int main()
{
    int n, t, taxi, one, two, three, four;

    scanf("%d", &t);
    taxi = one = two = three = four = 0;

    while(t--) {
        scanf("%d", &n);

        if(n == 1) one++;
        else if(n == 2) two++;
        else if(n == 3) three++;
        else four++;
    }

    taxi += four;

    if(one != 0 && three != 0) {
        if(one <= three) taxi += three;
        printf("taxi1 = %d\n", taxi);
    }
    
    
    
    taxi += two / 2;
    
    if(two % 2 != 0){
        if(one <= 2) taxi++;
        else one -= 2;

        if(one != 0){
            taxi += one / 4;
            if(one % 4 != 0) taxi += 1;
            printf("taxi2 = %d\n", taxi);
        }
    }
    

    printf("%d\n", taxi);

    return 0;
}