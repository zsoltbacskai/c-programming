#include <stdio.h>
#include <stdlib.h>
int main(){
    /* 4. Kérj be egy számot (min 16, max 31), írasd ki a bináris alakját balról jobbra helyesen! */
    int a;
    scanf("%d", &a);
    printf("%d%d%d%d%d", a/16, a%16/8, a%8/4, a%4/2, a%2);
    return 0;
}
