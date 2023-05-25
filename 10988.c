#include <stdio.h>
#include <string.h>
int main(){
	char word[101];
	scanf("%s", word);
	for(int i = 0; i <= strlen(word) - 1; i++){
		if(word[i] != word[strlen(word) - i - 1]){
			printf("0\n");
			return 0;
		}
	}
	printf("1\n");
	return 0;
}
