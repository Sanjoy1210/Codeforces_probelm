#include <stdio.h>

int main()
{
    int n, height, max = 0, min = 101, count1 = 0, count2 = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &height);
        if(height > max){
            max = height;
            count1 = i + 1;
        }
        if(height <= min){
            min = height;
            count2 = i + 1;
        }
    }

    if(count2 > count1){
        printf("%d\n", (count1 - 1 + n - count2));
    }
    else{
        printf("%d\n", (count1 - 1 + n - count2 - 1));
    }

    return 0;
}
