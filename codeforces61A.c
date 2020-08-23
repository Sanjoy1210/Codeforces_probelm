#include <stdio.h>

int main()
{
    char num1[102];
    char num2[102];
    scanf("%s", num1);
    scanf(" %[^\n]", num2);

    for(int i = 0; num1[i] != '\0'; i++){
        if(num1[i] == num2[i]){
            printf("0");
        }
        else{
            printf("1");
        }
    }

    return 0;
}
