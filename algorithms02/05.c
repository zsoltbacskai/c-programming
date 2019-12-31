#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	5.
	Adj meg egy 10 elemû int tömböt, írasd ki az elemek összegét, valamint a legkisebb és legnagyobb elemet.
	*/
	int i,sum=0,min,max,t[10]={4,2,6,8,12,10,14,18,16,11};
	for(i=0; i<10; i++){
		sum+=t[i];
	}
	printf("Az elemek osszege: %d", sum);
	min=t[0];
	max=t[0];
	for(i=0; i<10; i++){
		if(min>t[i]){
			min=t[i];
		}
		if(max<t[i]){
			max=t[i];
		}
	}
	printf("\nLegkisebb elem: %d", min);
	printf("\nLegnagyobb elem: %d", max);
	return 0;
}
