#include <stdio.h>

int main()
{
    int year, rem1, rem2, rem3, rem4;
    scanf("%d", &year);
    while(1) {
        year++;
        rem1 = year / 1000;
        rem2 = (year / 100) % 10;
        rem3 = (year / 10) % 10;
        rem4 = (year % 10);
        
        if(rem1 != rem2 && rem1 != rem3 && rem1 != rem4 && rem2 != rem3 && rem2 != rem4 && rem3 != rem4) {
            printf("%d\n", year);
            break;
        }
    }

    return 0;
}