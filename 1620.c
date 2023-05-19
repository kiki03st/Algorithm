#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct{
	int num;
	char name[21];
}monster;
int compare(const void* first, const void* second){
	monster *a = (monster*)first;
	monster *b = (monster*)second;
	if(strcmp(a->name, b->name) > 0) return 1;
	else return -1;
}
int main(){
	int n, m, num, len;
	char k;
	char word[21];
	char pokemon[100001][21];
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) scanf("%s", pokemon[i]);
	qsort(pokemon, n, compare);
	for(int i = 0; i < m; i++){
		scanf("%s", word);
		if(word[0] >= 65 && word[0] <= 90){
			//printf("%d\n", solution(pokemon, word));
		}
		else{
			num = 0;
			len = strlen(word) - 1;
			for(int j = 0; word[j] != '\0'; j++){
				num+=pow(10, len--) * (word[j] - '0');
			}
			printf("%s\n", pokemon[num]);
		}
	}
	return 0;
}
