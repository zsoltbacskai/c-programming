#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned)time(NULL));
    int ar=-1,br=-1,cr=-1,a=0,b=0,c=0,count=1,num,snum;
    while(ar<1){
        ar=rand()%10;
    }
    while(br<0 || br==ar){
        br=rand()%10;
    }
    while(cr<0 || cr==ar || cr==br){
        cr=rand()%10;
    }
    num=(ar*100)+(br*10)+(cr*1);
    //printf("code: %d\n", num);
    printf("Mi a 3 jegyu kod?\n");
    printf("- egy szamjegy (0-9) csak egyszer szerepelhet benne\n");
    printf("- az elso szam nem lehet 0\n");
    printf("- 10 probalkozasi lehetoseged van\n\n");
    while(count!=11){
        printf("%d. probalkozas!\n", count);
        scanf("%d", &snum);
        a=snum/100;
        b=(snum/10)%10;
        c=snum%10;
        if(a==0){
            printf("Az elso szamjegy nem lehet 0!\n\n");
        }
        else if(a==b || a==c || b==c){
            printf("Egy szamjegy csak egyszer szerepelhet!\n\n");

        }
        else if(snum==num){
            printf("3 szamjegy helyes es mind a 3 jo helyen van.\nNYERTEL!\n");
            count=10;
        }
        else if( (a==br && b==cr && c==ar) || (a==cr && b==ar && c==br) ){
            printf("3 szamjegy helyes, de az a 3 rossz helyen van.\n\n");
        }
        else if( (a==ar && b==cr && c==br) || (a==cr && b==br && c==ar) || (a==br && b==ar && c==cr) ){
            printf("3 szamjegy helyes, de ebbol 2 rossz helyen van.\n\n");
        }
        else if( (a==ar && b==br && c!=cr) || (a==ar && b!=br && c==cr) || (a!=ar && b==br && c==cr) ){
            printf("2 szamjegy helyes es az a 2 jo helyen van.\n\n");
        }
        else if( (a==br && b==ar && c!=cr) || (a==br && b!=cr && c==ar) || (a!=cr && b==ar && c==br) || (a==br && b==cr && c!=ar) || (a==cr && b!=ar && c==br) || (a!=ar && b==cr && c==br) || (a==cr && b==ar && c!=br) || (a==cr && b!=br && c==ar) || (a!=br && b==cr && c==ar) ){
            printf("2 szamjegy helyes, de az a 2 rossz helyen van.\n\n");
        }
        else if( (a==ar && b!=cr && c==br) || (a!=cr && b==br && c==ar) || (a==br && b!=ar && c==cr) || (a==cr && b==br && c!=ar) || (a==ar && b==cr && c!=br) || (a!=br && b==ar && c==cr) ){
            printf("2 szamjegy helyes, de ebbol 1 rossz helyen van.\n\n");
        }
        else if( (a==ar && b!=br && b!=cr && c!=br && c!=cr) || (a!=ar && a!=cr && b==br && c!=ar && c!=cr) || (a!=ar && a!=br && b!=ar && b!=br && c==cr) ){
            printf("1 szamjegy helyes es az az 1 jo helyen van.\n\n");
        }
        else if( (a!=br && a!=cr && b==ar && c!=br && c!=cr ) || (a!=br && a!=cr && b!=br && b!=cr && c==ar) || (a==br && b!=ar && b!=cr && c!=ar && c!=cr) || (a!=ar && a!=cr && b!=ar && b!=cr && c==br) || (a==cr && b!=ar && b!=br && c!=ar && b!=br) || (a!=ar && a!=br && b==cr && c!=ar && c!=br) ){
            printf("1 szamjegy helyes, de az az 1 rossz helyen van.\n\n");
        }
        else if((a!=ar || a!=br || a!=cr) && (b!=ar || b!=br || b!=cr) && (c!=ar || c!=br || c!=cr)){
            printf("0 szamjegy helyes.\n\n");
        }
        else{
            printf("Valami hiba van a programban!\n\n");
        }
        count++;
        if(count==11 && !(a==ar && b==br && c==cr)){
            printf("\nFigyelem! Nem sikerult 10 probalkozasbol feltornod a kodot!\nVESZTETTEL!\n");
        }
    }
    return 0;
}
