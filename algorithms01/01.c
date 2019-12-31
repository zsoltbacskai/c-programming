#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 1. Kérj be egy egész számot, írasd ki a kétszeresét! */
    int num;
    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &num);
    printf("A(z) %d ketszerese = %d.", num, num*2);
    return 0;
}
