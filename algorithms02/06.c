#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	6.
	Börtönõrös feladat.
	Egy börtönben 1000 cella van, mindegyikben egy rab ül.
	Kezdetben minden cella zárva van.
	A börtönõrnek játszani támad kedve: végigmegy az összes cella elõtt, és mindegyik ajtó zárján fordít egyet.
	Fordításkor a nyitott cellát bezárja, illetve a zártat kinyitja.
	Ha végigment, elkezdi elölrõl, és minden második cella zárján fordít egyet.
	Aztán minden harmadikon fordít, és így tovább.
	Legvégül fordít egyet az ezrediken, és kész.
	Ezután amelyik cella ajtaja nincs bezárva, abból a rab elmehet.
	Kik a szerencsés rabok? 
	*/
	int i,j,div=1,len=1000,t[len];
	for(i=0; i<len; i++){
		t[i]=0;
	}
	for(i=0; i<len; i++){
		for(j=0; j<len; j++)
			if((j+1)%div==0){
				if(t[j]==0){
					t[j]=1;
				}else{
					t[j]=0;
				}
			}
		div++;
		if(t[i]==1){
			printf("%d. nyitva\n", i+1);	
		}
	}
	return 0;
}
