#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    if(number >= 85 && number <= 100){
        printf("A+\n");
    }
    else if(number >= 65 && number <= 84){
        printf("A\n");
    }
    else if(number >= 55 && number <= 64){
        printf("B+\n");
    }
    else if(number >= 45 && number <= 54){
        printf("B\n");
    }
    else if(number >= 35 && number <= 44){
        printf("B-\n");
    }
    else{
        printf("F\n");
    }
    
    return 0;
}
