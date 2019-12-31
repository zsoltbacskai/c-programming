#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	6.
	B�rt�n�r�s feladat.
	Egy b�rt�nben 1000 cella van, mindegyikben egy rab �l.
	Kezdetben minden cella z�rva van.
	A b�rt�n�rnek j�tszani t�mad kedve: v�gigmegy az �sszes cella el�tt, �s mindegyik ajt� z�rj�n ford�t egyet.
	Ford�t�skor a nyitott cell�t bez�rja, illetve a z�rtat kinyitja.
	Ha v�gigment, elkezdi el�lr�l, �s minden m�sodik cella z�rj�n ford�t egyet.
	Azt�n minden harmadikon ford�t, �s �gy tov�bb.
	Legv�g�l ford�t egyet az ezrediken, �s k�sz.
	Ezut�n amelyik cella ajtaja nincs bez�rva, abb�l a rab elmehet.
	Kik a szerencs�s rabok? 
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
