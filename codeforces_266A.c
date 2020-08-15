#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 0, i, len;
	scanf("%d", &n);
	
	char stones[n];
	
	scanf("%s", stones);
	len = strlen(stones);
	
	for(i = 0; i < len; i++){
	    if(stones[i] == stones[i + 1]){
			count++;
		}
	}
	
	printf("%d\n", count);
	return 0;
}