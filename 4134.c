#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int n, max = 0;
	unsigned int k;
	scanf("%d", &n);
	unsigned int* arr = (unsigned int*)malloc(sizeof(unsigned int) * n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > max) max = arr[i];
	}
	unsigned int* num = (unsigned int*)malloc(sizeof(unsigned int) * (2 * max + 1));
	for(unsigned int i = 1; i <= 2 * max; i++) num[i] = 1;
	for(unsigned int i = 2; i < 2 * max; i++){
		for(unsigned int j = 2; i * j <= 2 * max; j++){
			num[i * j] = 0;
		}
	}
	for(unsigned int i = 0; i < n; i++){
		for(k = arr[i] + 1; num[k] == 0; k++){}
		printf("%d\n", k);
	}
	free(arr);
	free(num);
	return 0;
}
