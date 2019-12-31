#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 16 Írasd ki 100-tól 9999-ig azokat a számokat, melyek utolsó két számjegye által alkotott szám az elsõ két számjegy által alkotott szám fele! */
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
