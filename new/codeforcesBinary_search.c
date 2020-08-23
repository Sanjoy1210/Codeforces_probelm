#include <stdio.h>
#include <stdbool.h>

bool binary_search(int a[], int b, int num)
{
    int low_indx = 0, high_indx = b - 1, mid_indx;
    bool find = false;
    while(high_indx >= low_indx){
        mid_indx = (low_indx + high_indx) / 2;

        if(a[mid_indx] == num){
            find = true;
            break;
        }
        else if(a[mid_indx] < num){
            low_indx = mid_indx + 1;
        }
        else{
            high_indx = mid_indx - 1;
        }
    }
    return find;
}

int main()
{
    int n, k, x;
    scanf("%d %d", &n, &k);
    int ara[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(int i = 0; i < k; i++){
        scanf("%d", &x);
        bool num;

        num = binary_search(ara, n, x);

        if(num){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
