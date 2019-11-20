#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i=3,j=3,div=2,count=1,n=0;
	printf("What is the index of your prime?\n");
	scanf("%d", &n);
	while(n<=0){
		printf("Index must be greater than 0!\n\n");
		printf("What is the index of your prime?\n");
		scanf("%d", &n);
	}
	for(i=3; count<=n; i+=2){
		div=2;
		for(j=3; j<=sqrt(i); j+=2){
			if(j!=i && i%j==0){
				div++;
				if(div==3){
					break;
				}
			}
		}
		if(div==2){
			count++;
		}
		if(count==n && div==2){
			printf("Your prime is:\n%d\n", i);
		}
		if(n==1){
			printf("Your prime is:\n2\n");
		}
	}
	return 0;
}
