#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n, count = 0, k = 0;
	char word[6];
	scanf("%d", &n);
	time_t start = time(NULL);
	int* arr = (int*)malloc(sizeof(int) * 2000000);
	int* result = (int*)malloc(sizeof(int) * 2000000);
	for(int i = 0; i < n; i++){
		scanf("%s", word);
		if(!(strcmp(word, "push"))){
			count+=1;
			scanf("%d", &arr[count - 1]);
		}
		else{
			k+=1;
			if(!(strcmp(word, "pop"))){
				if(count == 0) result[k - 1] = -1;
				else{
					result[k - 1] = arr[0];
					for(int j = 0; j < count - 1; j++) arr[j] = arr[j + 1];
					count-=1;
				}
			}
			else if(!(strcmp(word, "size"))){
				result[k - 1] = count;
			}
			else if(!(strcmp(word, "empty"))){
				count == 0 ? result[k - 1] = 1:(result[k - 1] = 0);
			}
			else if(!(strcmp(word, "front"))){
				if(count == 0) result[k - 1] = -1;
				else result[k - 1] = arr[0];
			}
			else if(!(strcmp(word, "back"))){
				if(count == 0) result[k - 1] = -1;
				else result[k - 1] = arr[count - 1];
			}
		}
	}
	for(int i = 0; i < k; i++) printf("%d\n", result[i]);
	free(arr);
	free(result);
	printf("%lf\n", (double)(time(NULL) - start));
	return 0;
}
