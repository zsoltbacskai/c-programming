#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 14. �rd ki 1000-ig azokat a sz�mokat, melyek utols� k�t sz�mjegye pr�mszamot alkot! */
    int i=0,j=0,n=0,p=0;
    for(i=0; i<=1000; i++){
        p=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
               p++;
            }
        }
        if(p==2){
            n++;
        }
    }
    int t[n],u[n],k=0;
    for(i=0; i<=n-1; i++){
        t[i]=0;
        u[i]=0;
    }
    for(i=0; i<=1000; i++){
        p=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                p++;
            }
        }
        if(p==2){
            k++;
            t[k-1]=i; //ebben a t�mbben vannak a pr�mek 0-tol 1000-ig
            u[k-1]=i%100; //ez az a t�mb, amiben 0-t�l 1000-ig vannak a pr�mek utols� 2 sz�mjegyei
        }
    }
    for(i=0; i<=n-1; i++){
        p=0;
        for(j=1; j<=u[i]; j++){
            if(u[i]>=10 && u[i]%j==0){
                p++;
            }
        }
        if(p==2 && t[i]>=10){
            printf("%d\n", t[i]);
        }
    }
    return 0;
}
