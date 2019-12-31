#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 5. Cseréld fel két int változó értékét segédváltozó nélkül. */
    int a=3,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d", a,b);
    return 0;
}
