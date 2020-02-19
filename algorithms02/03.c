#include <stdio.h>

int main(){
	/*
	3. Kérj be két számot, írasd ki a legnagyobb közös osztójukat és a legkisebb közös többszörösüket Euklideszi algoritmust használva!
	*/
	int a,b,g,s,temp;
	printf("Add meg a-t: \n");
	scanf("%d", &a);
	printf("Add meg b-t: \n");
	scanf("%d", &b);
	g=a;
	s=b;
	while(g!=s){
		if(g<s){
			temp=g;
			g=s;
			s=temp;	
		}
		g-=s;
	}
	printf("LNKO: %d\nLKKT: %d", g, (a*b)/g);
    return 0;
}
