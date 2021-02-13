/* Kérje be egy minimum 3, maximum 10 hosszú sztringekbõl álló 10 elemû tömb elemeit, majd írassa ki azokat, amelyek hosszabbak, mint a bennük szereplõ számjegy értéke! Feltehetjük, hogy mindegyikben pontosan egy számjegy van. */
#include <stdio.h>
int main(){
	int i,j;
	
	char t[5][3];
	for(i=0; i<5; i++){
		for(j=0; j<3; i++){
			scanf("%s", &t[i][j]);
		}
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<3; i++){
			printf("%c", t[i][j]);
		}
		printf("\n");
	}
	
	/*
	char t[5][3]={
		{'a','b','c'},
		{'d','e','f'},
		{'g','h','i'},
		{'j','k','l'},
		{'m','n','o'}
	};
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			printf("%c ", t[i][j]);
		}
		printf("\n");
	}
	*/
	return 0;
}
