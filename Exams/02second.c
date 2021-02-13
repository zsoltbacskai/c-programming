/* 3.�rjon f�ggv�nyt, mely 2. int param�ter�ben visszaadja, hogy az els� int param�ter�ben megadott sz�m h�nyadik sz�mjegye
 a harmadik char param�terben megadott sz�mjegy karakter! Feltehetj�k, hogy a 3. param�terben megadott sz�mjegy mindig szerepel az els� param�terben. */
#include <stdio.h>
int fgv(int a, int b, char c){
	int div,sup=1,help,place=0;
	help=a;
	if(help<0){
		help*=(-1);
	}
	char cHelp;
	
	while(help>10){
		help/=10;
		sup*=10;
	}
	
	help=a;
	if(help<0){
		help*=(-1);
	}	
	while(cHelp!=c){
		div=help/sup;
		if(div==0){
			cHelp=48;
		}
		if(div==1){
			cHelp=49;
		}
		if(div==2){
			cHelp=50;
		}
		if(div==3){
			cHelp=51;
		}
		if(div==4){
			cHelp=52;
		}
		if(div==5){
			cHelp=53;
		}
		if(div==6){
			cHelp=54;
		}
		if(div==7){
			cHelp=55;
		}
		if(div==8){
			cHelp=56;
		}
		if(div==9){
			cHelp=57;
		}
		div*=sup;
		help-=div;
		sup/=10;
		place++;
	}
	
	b=place;
	
	return b;
}
int main(){
	printf("%d", fgv(7854321,0,'2'));
	return 0;
}
/*
fgv param�terei:
- az els�ben (a) (int) kap egy sz�mot
- harmadikban (c) (char) megadunk egy sz�mot (ez ugye 1 darab karakter)
- a m�sodikban (b) (int) megadjuk, hogy az els�ben h�nyadik sz�mjegy a harmadikban megadott sz�m

A sup egy nagys�grendet jelent... teh�t 54321-n�l 10000 lesz az �rt�ke.
Elosztom a sz�mot (help=a) a suppal, ekkor egy egyjegy� int-et (div) kapok �s annak az ASCII k�dj�val adok �rt�ket cHelp-nek. A while addig megy, am�g a fgv harmadik param�tere nem egyenl� a cHelp-pel.
Am�g nem teljes�l a felt�tel, addig a help-b�l kivonom a div*sup-ot (�gy a m�sodik k�rben m�r 4321 lesz), sup-ot elosztom 10-zel, hogy 1000 legyen bel�le a 4321-hez igzodva �s a place (ami helyi �rt�ket jel�l) n� 1-gyel.
Mire a v�g�re �r a ciklus, a place-ben lesz a harmadik param�terben megadott sz�m helyi �rt�ke.
*/
