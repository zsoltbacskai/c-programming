#include <stdio.h>
int fact(int a){
    if(a>0){
        return a*fact(a-1);
    }else{
        return 1;
    }
}
int main(){
    printf("%d\n", fact(5));
    return 0;
}
