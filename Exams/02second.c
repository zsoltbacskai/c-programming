/* Írjon függvényt, mely 2. int paraméterében visszaadja, hogy az első int paraméterében megadott szám hányadik számjegye
 a harmadik char paraméterben megadott számjegy karakter! Feltehetjük, hogy a 3. paraméterben megadott számjegy mindig szerepel az első paraméterben. */
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
fgv paraméterei:
- az elsőben (a) (int) kap egy számot
- harmadikban (c) (char) megadunk egy számot (ez ugye 1 darab karakter)
- a másodikban (b) (int) megadjuk, hogy az elsőben hányadik számjegy a harmadikban megadott szám

A sup egy nagyságrendet jelent... tehát 54321-nél 10000 lesz az értéke.
Elosztom a számot (help=a) a suppal, ekkor egy egyjegyű int-et (div) kapok és annak az ASCII kódjával adok értéket cHelp-nek. A while addig megy, amíg a fgv harmadik paramétere nem egyenlő a cHelp-pel.
Amíg nem teljesül a feltétel, addig a help-ből kivonom a div*sup-ot (így a második körben már 4321 lesz), sup-ot elosztom 10-zel, hogy 1000 legyen belőle a 4321-hez igzodva és a place (ami helyi értéket jelöl) nő 1-gyel.
Mire a végére ér a ciklus, a place-ben lesz a harmadik paraméterben megadott szám helyi értéke.
*/
