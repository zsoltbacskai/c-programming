/* Írassa ki 1000 és 100000 között azokat az egész számokat, melyek elsõ két számjegye egy prímszám kétszerese! */
#include <stdio.h>
int main(){
	int i,j,p=0,count=0;
	for(i=1; i<50; i++){
		p=0;
		for(j=1; j<=i; j++){
			if(i%j==0){
				p++;
			}
		}
		if(p==2){
			count++;
		}
	}
	int t[count],n=0;
	for(i=1; i<50; i++){
		p=0;
		for(j=1; j<=i; j++){
			if(i%j==0){
				p++;
			}
		}
		if(p==2){
			t[n]=i;
			n++;
		}
	}
	for(i=1000; i<=100000; i++){
		if(i>=1000 && i<=9999){
			for(j=0; j<count; j++){
				if(i/100 == t[j]*2){
					printf("%d ", i);
				}	
			}	
		}	
		if(i>=10000 && i<=99999){
			for(j=0; j<count; j++){
				if(i/1000 == t[j]*2){
					printf("%d ", i);
				}	
			}	
		}
		if(i==100000){
			for(j=0; j<count; j++){
				if(i/10000 == t[j]*2){
					printf("%d ", i);
				}	
			}	
		}	
	}
	return 0;
}
