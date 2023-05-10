#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}
int main(){
	int n, num;
	int arr_min[100001] = {0}, arr_max[100001]={0};
	scanf("%d", &n);
	int arr[500001];
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		if(num < 0){
			if(arr_min[-num] == 0) arr[i] = num;
			arr_min[-num] += 1;
		}
		else{
			if(arr_max[num] == 0) arr[i] = num;
			arr_max[num] += 1;
		}
	}
	qsort(arr, n, sizeof(int), compare);
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");
	int low = 0, mid, high = n - 1;
	int k;
	scanf("%d", &k);
	for(int i = 0; i < k; i++){
		scanf("%d", &num);
		while(low <= high){
			mid = (low + high) / 2;
			if(arr[mid] == num) break;
			else if(num > arr[mid]) low = mid + 1;
			else high = mid - 1;
		}
		if(low > high && mid > -1){
		       if(arr[mid] >= 0) printf("%d ", 	       
