#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n, count = 0;
	scanf("%d", &n);
	char name[6], el[6];
	char** arr = (char**)malloc(sizeof(char*) * n);
	for(int i = 0; i < n; i++) arr[i] = "??";
	for(int i = 0; i < n; i++){
		scanf("%s %s", name, el);
		if(!(strcmp(el, "enter"))) arr[count++] = name;
		else{
			for(int j = 0; j < count; j++){
				if(!(strcmp(name, arr[j]))) arr[j] = "??";
			}
		}
	}
	for(int i = 0; i < n; i++) if(strcmp(arr[i], "??")) printf("%s\n", arr[i]);
	return 0;
}
