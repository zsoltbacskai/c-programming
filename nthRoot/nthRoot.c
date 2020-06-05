#include <stdio.h>
#include <math.h>
float nroot(float x, float n){
	float a;
	a=pow(x,1/n);
	return a;
}
int main(){
	float x,n;
	printf("What is 'x'?\n");
	scanf("%f", &x);
	printf("What is 'n'?\n");
	scanf("%f", &n);
	printf("Value of 'a' is:\n%f", nroot(x,n));
	return 0;
}
