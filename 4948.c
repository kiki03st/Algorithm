#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int count = 0, word;
	int* arr= (int*)malloc(sizeof(int) * 0);
	while(1){
		scanf("%d", &word);
		if(word == 0) break;
		count += 1;
		arr = realloc(arr, sizeof(int) * count);
		int* result = (int*)malloc(sizeof(int) * (2 * word + 1));
		if(word == 1) 
		for(int i = 0; i < 2 * word + 1) result[i] = 0;
		
