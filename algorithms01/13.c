#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 13. Kérd be egy háromszög oldalait, írasd ki, hogy derékszögû-e! */
    float a,b,c;
    printf("Add meg az 'a' oldalt: ");
    scanf("%f", &a);
    printf("Add meg a 'b' oldalt: ");
    scanf("%f", &b);
    printf("Add meg a 'c' oldalt: ");
    scanf("%f", &c);
    if(a*a+b*b==c*c){
        printf("A haromszog derekszogu.");
    }else{
        printf("A haromszog NEM derekszogu.");
    }
    return 0;
}
