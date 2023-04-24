#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, a, b, min, result;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		if(a == b){
			arr[i] = a;
			continue;
		}
		else if(a > b) min = b;
		else min = a;
		for(int j = min; j > 0; j--){
			if(a % j == 0 && b % j == 0){
				arr[i] = a * b / j;
				break;
			}
		}
	}
	for(int i = 0; i < n; i++) printf("%d\n", arr[i]);
	free(arr);
	return 0;
}
