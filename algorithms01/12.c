#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 12. �rasd ki t�bl�zatos alakban az �sszes k�tbet�s sz�t, mely el��llhat az angol kisbet�s abc els� 10 bet�j�b�l! */
    int i=0,j=0;
    for(i=97; i<=106; i++){
        for(j=97; j<=106; j++){
            printf("%c%c ", i, j);
            if(j==106){
                printf("\n");
            }
        }
    }
    return 0;
}
