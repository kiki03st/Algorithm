#include <stdio.h>
#include <stdlib.h>
int main(){
	int tf, n, sum = 0, tmp;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	for(int i = 0; i < n - 1; i++){
		tf = 0;
		for(int j = 0; j < n -1 - i; j++){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				tf = 1;
			}
		}
		if(tf == 0) break;
	}
	printf("%d\n%d\n%d\n%d\n", sum / n, arr[n / 2], arr[1], arr[n - 1] - arr[0]);
	return 0;
}
