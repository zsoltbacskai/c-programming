#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 20. K�rj be egy sz�mot, s �rasd ki a t�le nagyobb n�gyzetsz�mok k�z�l a legkisebbet! */
    int a,n=1;
    printf("Adj meg egy szamot:\n");
    scanf("%d", &a);
    while((n*n)<=a){
        n++;
    }
    n*=n;
    printf("%d", n);
    return 0;
}
