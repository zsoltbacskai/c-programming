#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	4.
	K�rj be egy 4 elem� int t�mb�t elemenk�nt, majd �rasd ki az elemeket.
	K�rj be egy 10 elem� char t�mb�t elemenk�nt, majd �rasd ki az elemeket, haszn�ld a for ciklust.
	*/
	int i,t[4];
	char c[10];
	printf("Add meg egyesevel a 4 elemu int tomb elemeit: \n");
	for(i=0; i<4; i++){
		scanf("%d", &t[i]);
	}
	printf("A 4 elemu int tomb elemei: ");
	for(i=0; i<4; i++){
		printf("%d ", t[i]);
	}
	printf("\n\nAdd meg egyesevel a 10 elemu char tomb elemeit: \n");
	for(i=0; i<10; i++){
		scanf("%s", &c[i]);
	}
	printf("A 10 elemu char tomb elemei: ");
	for(i=0; i<10; i++){
		printf("%c ", c[i]);
	}
	return 0;
}
