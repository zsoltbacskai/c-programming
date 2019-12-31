#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 8. Kérj be 2 karaktert, majd írasd ki az általuk meghatározott zárt intervallumban lévõ karaktereket. Figyelj arra, hogy [b;f] más eredményt ad, mint az [f;b]! */
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
