#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	/* 7. K�rd be a saj�t �s a f�n�k�d fizet�s�t, majd 3 operandus� oper�tort haszn�lva �rasd ki a v�lemenyed! */
    int boss,mine;
    printf("Mennyit keres a fonokod? ");
    scanf("%d", &boss);
    printf("Mennyit keresel te? ");
    scanf("%d", &mine);
    boss>mine ? printf("Igen, tobbet keres a fonok, de lesz meg nekem is annyi."):printf("Fura, hogy tobbet keresek, mint a fonok, de nem vagyok miatta szomoru.");
    return 0;
}
