#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 9. Kérj be 3 számot, írasd ki a legnagyobbat! Oldd meg if nélkül is a feladatot! */
    int a,b,c,temp1,temp2,temp3;
    printf("Adj meg harom szamot: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    temp1=a,temp2=b,temp3=c;
    if(temp1>=temp2){
        temp2=temp1;
    }else{
        temp1=temp2;
    }
    if(temp2>=temp3){
        temp3=temp2;
    }else{
        temp2=temp3;
    }
    if(a==temp3){
        printf("Az a = %d a legnagyobb.", a);
    }else if(b==temp3){
        printf("A b = %d a legnagyobb.", b);
    }else{
        printf("A c = %d a legnagyobb.", c);
    }
    return 0;
}
