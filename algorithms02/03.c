#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
	3. K�rj be k�t sz�mot, �rasd ki a legnagyobb k�z�s oszt�jukat �s a legkisebb k�z�s t�bbsz�r�s�ket Euklideszi algoritmust haszn�lva!
	*/
	int a,b,g,s,temp,lnko,lkkt,factor;
	printf("Add meg a-t: \n");
	scanf("%d", &a);
	printf("Add meg b-t: \n");
	scanf("%d", &b);
	g=a;
	s=b;
	while(g!=s){
		if(g>s){
			g=g;
			s=s;
		}else{
			temp=g;
			g=s;
			s=temp;
		}
			g=g-s;
	}
	lnko=g;
	printf("LNKO: %d\n", lnko);
	factor=a*b;
	lkkt=factor/lnko;
	printf("LKKT: %d", lkkt);
    return 0;
}
