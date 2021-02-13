#include <stdio.h>
int power(int a, int n){
    if(n>0){
        n--;
        return a*=power(a,n);
    }else{
        return 1;
    }
}
int main(){
    printf("%d", power(5,3));
    return 0;
}
