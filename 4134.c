#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n, max = 0, k;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > max) max = arr[i];
	}
	int tf;
	k = max;
	while(1){
		tf = 0
		for(int i = 2; i < k; i++){
			if(k % i == 0){
				tf = 1;
				break;
			}
		}
		if(tf == 0){
			break;
		}
		k++;
	}
	int* result = (int*)malloc(sizeof(int) * k
