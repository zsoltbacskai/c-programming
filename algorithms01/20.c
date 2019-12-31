#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 20. Kérj be egy számot, s írasd ki a tõle nagyobb négyzetszámok közül a legkisebbet! */
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
