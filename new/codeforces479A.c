#include <stdio.h>

int main()
{
    int a, b, c, a1, a2;
    scanf("%d %d %d", &a, &b, &c);

    a1 = a2 = 0;

    a1 = a + b * c;
    if(a1 > a2){
        a2 = a1;
    }
    a1 = a * (b + c);
    if(a1 > a2) {
        a2 = a1;
    }
    a1 = a * b * c;
    if(a1 > a2){
        a2 = a1;
    }
    a1 = a + b + c;
    if(a1 > a2){
        a2 = a1;
    }
    a1 = (a + b) * c;
    if(a1 > a2){
        a2 = a1;
    }
    printf("%d\n", a2);

    return 0;
}
