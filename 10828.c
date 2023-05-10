#include <stdio.h>
#include <string.h>
int compare(char a[], char b[]){
	int count = 0;
	if(strlen(a) != strlen(b)) return 0;
	while(a[count] == '\0') if(a[count] != b[count]) return 0;
	return 1;
}

int main(){
	int n, count = 0, k = 0;
	char word[6];
	int arr[10001] = {0};
	int result[10001];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", word);
		if(compare(word, "push")){
			scanf("%d", &arr[count]);
			count+=1;
		}
		else if(compare(word, "top")){
			if(count == 0) result[k] = -1;
			else result[k] = arr[count - 1];
			k+=1;
		}
		else if(compare(word, "size")){
			result[k] = count;
			k+=1;
		}
		else if(compare(word, "empty")){
			if(count == 0) result[k] = 1;
			else result[k] = 0;
			k+=1;
		}
		else if(compare(word, "pop")){
			if(count == 0) result[k] = -1;
			else{
				result[k] = arr[count - 1];
				arr[count - 1] = 0;
				count-=1;
			}
			k+=1;
		}
	}
	for(int i = 0; i < k; i++) printf("%d\n", result[i]);
	return 0;
}

