#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 8. K�rj be 2 karaktert, majd �rasd ki az �ltaluk meghat�rozott z�rt intervallumban l�v� karaktereket. Figyelj arra, hogy [b;f] m�s eredm�nyt ad, mint az [f;b]! */
    int i;
    char first,second;
    printf("Add meg az elso karaktert: ");
    scanf("%c", &first);
    printf("Add meg a masodik karaktert: ");
    scanf(" %c", &second);
    if(first<second){
        for(i=first; i<=second; i++){
            printf("%c ", i);
        }
    }else{
        for(i=first; i>=second; i--){
            printf("%c ", i);
        }
    }
    return 0;
}
