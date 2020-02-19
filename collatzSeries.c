#include <stdio.h>
int main(){
	int count,n,original;
	printf("Value of n:\n");
	scanf("%d", &n);
	while(n<1){
		printf("Value of n:\n");
		scanf("%d", &n);
	}
	printf("\n");
	while(n!=1){
		original=n;
		if(n%2==0){
			printf("n(%d) is even\n", n);
			n/=2;
			printf("%d / 2 = %d\n\n", original, n);
		}else{
			printf("n(%d) is odd\n", n);
			n=(3*n)+1;
			printf("(3 * %d) + 1 = %d\n\n", original,n);
		}
		count++;
	}
	printf("\n%d step(s)", count);
	return 0;
}
