#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 3. Kérj be egy számot (min 16, max 31), írasd ki a bináris átváltásnál kapott sorokat! */
    int num;
    printf("Adj meg egy egesz szamot, ami 16 es 31 koze esik: ");
    scanf("%d", &num);
    if(num>=16 && num<=31){
        while(num>0){
            printf("%d\t|\t%d\n", num, num%2);
            num=num/2;
        }
    }else{
        printf("A megadott szam nem 16 es 31 koze esik.");
    }
    return 0;
}
