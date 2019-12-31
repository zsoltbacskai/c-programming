#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 12. Írasd ki táblázatos alakban az összes kétbetûs szót, mely elõállhat az angol kisbetûs abc elsõ 10 betûjébõl! */
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
