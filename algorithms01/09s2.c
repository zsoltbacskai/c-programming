#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 9. Kérj be 3 számot, írasd ki a legnagyobbat! Oldd meg if nélkül is a feladatot! */
    int a,b,c, max;
 	printf("Add meg az elso szamot: ");
 	scanf("%d", &a);
 	printf("Add meg a masodik szamot: ");
 	scanf("%d", &b);
 	printf("Add meg a harmadik szamot: ");
 	scanf("%d", &c);
 	max = a; // feltetelezzuk, hogy az A lesz a legnagyobb
 	(max < b) && (max = b);
 	(max < c) && (max = c);
 	printf("A legnagyobb szam: %d", max);
    return 0;
}
