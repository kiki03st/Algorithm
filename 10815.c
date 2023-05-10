#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
	return *(int*)a - *(int*)b;
}
int main(){
	int n, tmp, tf;
	scanf("%d", &n);
	int arr[500001];//int* arr = (int*)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
/*
	for(int i = n - 1; i > 0; i--){
		tf = 0;
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				tf = 1;
			}
		}
		if(tf == 0) break;
	}
*/
	qsort(arr, n, sizeof(int), compare);
	int word, num, low, mid, high;
	scanf("%d", &word);
	for(int i = 0; i < word; i++){
		scanf("%d", &num);
		low = 0; high = n - 1;
		while(low <= high){
			mid = (low + high) / 2;
			if(arr[mid] == num) break;
			else if(arr[mid] > num) high = mid - 1;
			else low = mid + 1;
		}
		if(low <= high && mid > -1) printf("1 ");
		else printf("0 ");
	}
/*
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");
*/
	//free(arr);
	return 0;
}
