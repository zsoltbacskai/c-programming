#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
	2. Kérj be két számot, írasd ki a legnagyobb közös osztójukat és a legkisebb közös többszörösüket!
	*/
	int a,b,i,lnko,lkkt,factor;
	printf("Add meg a-t: \n");
	scanf("%d", &a);
	printf("Add meg b-t: \n");
	scanf("%d", &b);
	for(i=1; i<=a; i++){
		if(a%i==0 && b%i==0){
			lnko=i;
		}
	}
	printf("LNKO: %d\n", lnko);
	i=1;
	while((a*i)%b!=0){
		i++;
	}
	lkkt=a*i;
	printf("LKKT: %d", lkkt);
    return 0;
}
