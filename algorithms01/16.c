#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 16 �rasd ki 100-t�l 9999-ig azokat a sz�mokat, melyek utols� k�t sz�mjegye �ltal alkotott sz�m az els� k�t sz�mjegy �ltal alkotott sz�m fele! */
    int i=0,j=0;
    for(i=100; i<=9999; i++){
        if(i<=999){
            if(i/10 == (i%100)*2){
                printf("%d ", i);
            }
        }
        if(i>=1000){
            if(i/100 == (i%100)*2){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
