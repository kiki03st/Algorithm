#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n, m, max = 0, count;
	scanf("%d", &n);
	int* num = (int*)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		if(m > max) max = m;
		num[i] = m;
	}
	int* arr = (int*)malloc(sizeof(int) * (2 * max + 1));
	for(int i = 1; i <= 2 * max; i++) arr[i] = 1;
	for(int i = 2; i < 2 * max; i++){
		for(int j = i + 1; j <= 2 * max; j++){
			if(!(j % i) && arr[j]) arr[j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		count = 0;
		for(int j = 2; j <= num[i] / 2; j++){
			if(arr[j] && arr[num[i] - j]) count++;
		}
		printf("%d\n", count);
	}
	free(num);
	free(arr);
	return 0;
}
