#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 18. Kérj be 3 egész számot, írasd ki, hány darab egyforma van köztük! */
    int a,b,c,count=0;
    printf("Adj meg 3 egesz szamot:\n\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b){
        count++;
    }
    if(a==c){
        count++;
    }
    if(b==c){
        count++;
    }
    if(count==1){
        count=2;
    }
    if(count==0){
        printf("\n0 darab egyforma van koztuk.");
    }else{
        printf("\n%d darab egyforma van koztuk.", count);
    }
    return 0;
}
