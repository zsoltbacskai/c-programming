#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 19. Írasd ki 1000-ig azokat a háromjegyû számokat, melyeknek középsõ számjegye kisebb, mint az elsõ számjegy! */
    int i=100;
    for(i=100; i<=999; i++){
        if((i%100)/10 < (i/100)){
            printf("%d ", i);
        }
    }
    return 0;
}
