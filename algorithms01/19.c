#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 19. �rasd ki 1000-ig azokat a h�romjegy� sz�mokat, melyeknek k�z�ps� sz�mjegye kisebb, mint az els� sz�mjegy! */
    int i=100;
    for(i=100; i<=999; i++){
        if((i%100)/10 < (i/100)){
            printf("%d ", i);
        }
    }
    return 0;
}
