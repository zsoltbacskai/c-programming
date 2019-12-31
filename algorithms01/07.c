#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	/* 7. Kérd be a saját és a fõnököd fizetését, majd 3 operandusú operátort használva írasd ki a vélemenyed! */
    int boss,mine;
    printf("Mennyit keres a fonokod? ");
    scanf("%d", &boss);
    printf("Mennyit keresel te? ");
    scanf("%d", &mine);
    boss>mine ? printf("Igen, tobbet keres a fonok, de lesz meg nekem is annyi."):printf("Fura, hogy tobbet keresek, mint a fonok, de nem vagyok miatta szomoru.");
    return 0;
}
