#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 2. K�rd be egy t�glalap oldalait, �rasd ki a ter�let�t, ker�let�t! */
    float a,b;
    printf("Add meg a teglalap 'a' oldalat: ");
    scanf("%f", &a);
    printf("Add meg a teglaplap 'b' oldalat: ");
    scanf("%f", &b);
    printf("A teglalap terulete = %.2f, kerulete = %.2f.", a*b, (a+b)*2);
    return 0;
}
