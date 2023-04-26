#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, min = -1, tf, k;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* len = (int*)malloc(sizeof(int) * (n - 1));;
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(i > 0){
			len[i-1] = arr[i] - arr[i - 1];
			if(min == -1 || arr[i] - arr[i - 1] < min) min = arr[i] - arr[i - 1];
		}
	}
	for(int i = min; i > 0; i--){
		tf = 1;
		for(int j = 0; j < n - 1; j++){
			if(len[j] % i != 0){
				tf = 0;
				break;
			}
		}
		if(tf == 1){
			k = i;
			break;
		}
	}
	int m = 0, count = 0;
	for(int i = arr[0]; i < arr[n - 1]; i+=k){
		if(arr[m] != i) count+=1;
		else m+=1;
	}
	printf("%d\n", count);
	free(arr);
	free(len);
	return 0;
}

