#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 5. Cser�ld fel k�t int v�ltoz� �rt�k�t seg�dv�ltoz� n�lk�l. */
    int a=3,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d", a,b);
    return 0;
}
