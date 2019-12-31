#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 17. Írasd ki százig azokat a számokat, melyek fele nem prímszám! */
    int i=0,j=0,p=0,n=0,count=0;
    for(i=0; i<=100; i++){
        p=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                p++;
            }
        }
        if(p==2){
            n++;
        }
    }
    int t[n];
    for(i=0; i<=n-1; i++){
        t[i]=0;
    }
    for(i=0; i<=100; i++){
        p=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                p++;
            }
        }
        if(p==2){
            count++;
            t[count-1]=i;
        }
    }
    for(i=0; i<=100; i++){
        p=0;
        for(j=0; j<=n-1; j++){
            if((i/2)!=t[j] || (i/2)*2<i){
                    p++;
                }
            }
        if(p==n){
            printf("%d\n", i);
        }
    }
    /*
    //Zoli
    int i, div, j;
 	for(i = 0; i <= 100; i++){
 	 	div = 0;
 	 	for(j = 1; j <= i; j++){
 	 		if((i/2)%j == 0 || (i/2)*2<i){
 	 			div++;
 	 		}
 	 	}
 	 	if(div != 2){
 	 		printf("%d\n", i);
 	 	}
 	}
 	*/
    return 0;
}
