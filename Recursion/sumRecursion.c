#include <stdio.h>
int sum(int a){
    if(a>0){
        return a+sum(a-1);
    }else{
        return 0;
    }
}
int main(){
    printf("%d\n", sum(100));
    return 0;
}
