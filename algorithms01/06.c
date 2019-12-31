#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 6. Írj programot, mellyel kideríthetõ az int típusú legnagyobb es legkisebb szám. */
    int i;
    i=0;
    while(!(i<0)){
        i++;
    }
    printf("Legkisebb: %d\n", i);
    i=i-1;
    printf("Legnagyobb: %d", i);
    return 0;
}
