#include <stdio.h>

int main()
{
    int t, n;
    unsigned long long k;
    scanf("%d", &t);
    while(t--){
        scanf("%d %llu", &n, &k);
        long ara[n], d = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &ara[i]);
            if(ara[i] > d){
                d = ara[i];
            }
        }
        for(int i = 0; i < n; i++){
            ara[i] = (d - ara[i]);
            //printf("%d ", ans);
        }

        long ans = 0;
        for(int i = 0; i < n; i++){
            if(ara[i] > ans){
                ans = ara[i];
            }
        }
        k--;

        if(k & 1){
            for(int i = 0; i < n; i++){
                ara[i] = ans - ara[i];
            }
        }

        for(int i = 0; i < n; i++){
            printf("%d ", ara[i]);
        }
        printf("\n");
    }

    return 0;
}
//
//4
//6 4
//219 57 -58 230 173 177
//2 4
//266 176
//3 2
//134 -190 202
//5 69
//-1000000000 -1000000000 1000000000 0 1000000000
