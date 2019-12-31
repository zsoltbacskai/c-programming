#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 11. Írasd ki 100-ig a bõvelkedõ számokat! */
    int i=1,j=1,sum=0;
    for(i=1; i<=100; i++){
        sum=0;
        for(j=1; j<=i/2; j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum>i){
            printf("%d ", i);
        }
    }
    return 0;
}
