#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 15. �rasd ki 100-ig azokat a sz�mokat, melyeknek p�ratlan sz�m� oszt�ja van! */
    int i,j,count=0;
    for(i=1; i<=100; i++){
        count=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count%2!=0){
            printf("%d ", i);
        }
    }
    return 0;
}
