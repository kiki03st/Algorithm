#include <stdio.h>
#include <stdlib.h>
int solution(char** arr, int a, int b){
	int min, n = 0, m = 0;
	for(int i = a; i < a + 8; i++){
		for(int j = b; j < b + 8; j++){
			if((i + j) % 2 == 0){
				if(arr[i][j] == 'W') n+=1;
				else m+=1;
			}
			else{
				if(arr[i][j] == 'B') n+=1;
				else m+=1;
			}
		}
	}
	n > m ? min = m : (min = n);
	return min;
}
int main(){
	int n, m, min = 64;
	scanf("%d %d", &n, &m);
	char** arr = (char**)malloc(sizeof(char*) * n);
	for(int i = 0; i < n; i++){
		arr[i] = (char*)malloc(sizeof(char) * (m + 1));
		scanf("%s", arr[i]);
	}

	for(int i = 0; i <= n - 8; i++){
		for(int j = 0; j <= m - 8; j++){
			if(solution(arr, i, j) < min) min = solution(arr, i, j);
		}
	}
	printf("%d\n", min);
	return 0;
}
