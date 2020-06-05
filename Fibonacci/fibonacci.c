#include <stdio.h>
int main(){
	int a=0,b=1,temp;
	printf("%d ", a);
	while(b<1000){
		printf("%d ", b);
		temp=b;
		b=a+b;
		a=temp;
	}
	return 0;
}
