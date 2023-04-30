#include <stdio.h>
#include <stdlib.h>
int main(){
	int* arr = (int*)malloc(sizeof(int) * 0);
	int max = -1, n, count = 0;
	while(1){
		scanf("%d", &n);
		if(n == 0) break;
		if(max == -1 || n > max) max = n;
		realloc(arr, sizeof(int) * ++count);
	}
	int* num = (int*)malloc(sizeof(int) * (max - 1));
	for(int i = 2; i <= max; i++) num[i - 2] = i;
	int x = 0;
	int k;
	max -= 1;
	while(x == max - 1){
		if(num[x] == -1){
			x+=1;
			continue;
		}
		for(int i = x + 1; i < max; i++) if(num[i] % num[x] == 0) num[i] = -1;
		x+=1;
	}
	for(int i = 0; i < max - 1; i++) printf("%d ", num[i]);
	printf("\n");
	return 0;
}
//Not Solved
