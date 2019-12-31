#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
	1. Kérj be egy pénzösszeget, fizesd ki minimális db címlettel!
	*/
    int n,m20000=0,m10000=0,m5000=0,m2000=0,m1000=0,m500=0,m200=0,m100=0,m50=0,m20=0,m10=0,m5=0;
    printf("What is the money?\n");
    scanf("%d", &n);
    if(n%10==3 || n%10==8){
        n+=2;
    }
    if(n%10==4 || n%10==9){
        n+=1;
    }
    if(n%10==2 || n%10==7){
        n-=2;
    }
    if(n%10==1 || n%10==6){
        n-=1;
    }
    printf("Rounded to %d\n\n", n);
    if(n/20000!=0){
        while(n-20000>=n%20000){
            n-=20000;
            m20000++;
        }
    }
    if(n/10000!=0){
        while(n-10000>=n%10000){
            n-=10000;
            m10000++;
        }
    }
    if(n/5000!=0){
        while(n-5000>=n%5000){
            n-=5000;
            m5000++;
        }
    }
    if(n/2000!=0){
        while(n-2000>=n%2000){
            n-=2000;
            m2000++;
        }
    }
    if(n/1000!=0){
        while(n-1000>=n%1000){
            n-=1000;
            m1000++;
        }
    }
    if(n/500!=0){
        while(n-500>=n%500){
            n-=500;
            m500++;
        }
    }
    if(n/200!=0){
        while(n-200>=n%200){
            n-=200;
            m200++;
        }
    }
    if(n/100!=0){
        while(n-100>=n%100){
            n-=100;
            m100++;
        }
    }
    if(n/50!=0){
        while(n-50>=n%50){
            n-=50;
            m50++;
        }
    }
    if(n/20!=0){
        while(n-20>=n%20){
            n-=20;
            m20++;
        }
    }
    if(n/10!=0){
        while(n-10>=n%10){
            n-=10;
            m10++;
        }
    }
    if(n/5!=0){
        while(n-5>=n%5){
            n-=5;
            m5++;
        }
    }
    printf("20000\tx %d\n", m20000);
    printf("10000\tx %d\n", m10000);
    printf("5000\tx %d\n", m5000);
    printf("2000\tx %d\n", m2000);
    printf("1000\tx %d\n", m1000);
    printf("500\tx %d\n", m500);
    printf("200\tx %d\n", m200);
    printf("100\tx %d\n", m100);
    printf("50\tx %d\n", m50);
    printf("20\tx %d\n", m20);
    printf("10\tx %d\n", m10);
    printf("5\tx %d\n", m5);
    return 0;
}
