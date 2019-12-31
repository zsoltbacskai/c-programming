#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    /* 10. Írasd ki 0-tól ezerig azokat a prímszámokat, melyekben a számjegyek összege 8! */
    int i,j,p=0,n=0,m=0;
    for(i=0; i<1001; i++){
        p=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                p++;
            }
        }
        if(p==2){
            n++; //ilyen hosszu lesz a tomb
        }
    }
    int t[n],sum[n];
    for(i=0; i<n; i++){
        sum[i]=0;
    }
    for(i=0; i<1001; i++){
        p=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                p++;
            }
        }
        if(p==2){
            m++;
            t[m-1]=i; //m-1-rõl indulunk, mert a tomb sorszama 0-rol indul
        }
    }
    int temp=0,magnitude=0;
    for(i=0; i<n; i++){
        temp=t[i];
        magnitude=1;
        //itt hatarozzuk meg a nagysagrendet
        while(temp>1){
            temp/=10;
            magnitude*=10;
        }
        temp=t[i];
        //itt hatarozzuk meg a szamjegyek osszeget
        while(magnitude>=1){
            temp=t[i]; //fontos, hogy while minden ujboli lefutasanal temp a t tomb soron kovetkezo elemevel legyen egyenlo
            temp=(temp/magnitude)%10;
            magnitude/=10;
            sum[i]+=temp;
        }
    }
    for(i=0; i<n; i++){
        if(sum[i]==8){
            printf("%d ", t[i]);
        }
    }
    return 0;
}
