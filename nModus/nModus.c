#include <stdio.h>
int main(){
	int i,j,t[13]={1,2,3,4,4,5,5,5,6,8,8,8,9},db,tsize=sizeof(t)/sizeof(t[0]),u[tsize];
	for(i=0; i<tsize; i++){
		db=0;
		for(j=0; j<tsize; j++){
			if(t[i]==t[j]){
				db++;
			}
		}
		u[i]=db; //darabszamok bele egy tombbe (u) -> 1 1 1 2 2 3 3 3 1 3 3 3 1
	}
	int max=u[0];
	for(i=0; i<tsize; i++){
		if(max<u[i]){
			max=u[i]; //darabszamok kozul a legnagyobb megkeresese -> 3
		}
	}	
	int k=0;
	for(i=0; i<tsize; i++){
		if(u[i]==max){
			k++; //hogy tudjuk mekkora tombben kell eltarolni a max darabszammal azonos elemek indexeit, ezert megszamoljuk oket -> 6
		}
	}
	
	//egy tombbe (v) rakjuk azokat az indexeket, ahol leggyakoribb elemek (ismetlessel) talalhatoak
	int v[k],l=0;
	for(i=0; i<tsize; i++){
		if(u[i]==max){
			v[l]=i; //5 6 7 9 10 11
			l++; //6
		}
	}
	
	//itt megszamoljuk, hogy hany darab kulonbozo moduszunk van
	int m=0,n=1; //n=1, mert minimum 1 darab modusz letezik
	for(i=0; i<l; i++){
		//printf("%d ", t[v[i]]); // 5 5 5 8 8 8
		if(t[v[m]]!=t[v[i]]){
			m=i; //m=0 aztan m=3
			n++; //2 darab kulonbozo modusz, ekkora meretu tombben kell majd oket tarolni
		}
	}
	//itt fogjuk egy tombben (w) eltarolni a moduszokat
	m=0;
	int w[n],o=1;
	w[0]=t[v[0]]; //a t[v[0]] -> 5, mert ez az eredeti tomb 5. indexere mutat. ez az elem biztosan modusz lesz, ezert maris beletesszuk a w tomb elso helyere 
	//printf("%d", w[0]); //5
	for(i=0; i<l; i++){
		if(t[v[m]]!=t[v[i]]){ //m erteke a kezdetben 0, v tombben pedig a leggyakoribb elemek indexei vannak. t pedig a vizsgalt tombunk.
			w[o]=t[v[i]]; //ha elterest talalt a fenti if, akkor az adott elem bekerul a w tomb o-adik helyere. o erteke kezdetben 1 volt, mert a ciklus elott mar raktunk erteket a 0. helyre
			m=i; //m erteke most az uj elem indexe lesz
			o++; //o erteke pedig no 1-gyel
		}
	}
	for(i=0; i<o; i++){
		printf("%d ", w[i]); //ez mar csak a modusz(ok) kiiratasa -> 5 8
	}
	return 0;
}
