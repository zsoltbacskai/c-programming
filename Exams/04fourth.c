/* K�rje be egy minimum 3, maximum 10 hossz� sztringekb�l �ll� 10 elem� t�mb elemeit, majd �rassa ki azokat, amelyek hosszabbak, mint a benn�k szerepl� sz�mjegy �rt�ke! Feltehetj�k, hogy mindegyikben pontosan egy sz�mjegy van. */
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
