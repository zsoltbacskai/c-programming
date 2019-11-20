#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n,i,j,div=2,count=0;
	printf("What is the limit?\n");
	scanf("%d", &n);
	while(n<2){
		printf("Minimum value of limit must be 2!\n");
		scanf("%d", &n);
	}
	for(i=3; i<=sqrt(n); i+=2){
		div=2;
		for(j=3; j<=sqrt(i); j+=2){
			if(i%j==0 && j!=i){
				div++;
				if(div>2){
					break;
				}
			}
		}
		if(div==2){
			count++;
		}
	}
	int t[count],indx=0;
	for(i=3; i<=sqrt(n); i+=2){
		div=2;
		for(j=3; j<=sqrt(i); j+=2){
			if(i%j==0 && j!=i){
				div++;
				if(div>2){
					break;
				}
			}
		}
		if(div==2){
			t[indx]=i;
			indx++;
		}
	}	
	int many=1;
	for(i=3; i<=n; i+=2){
		div=2;
		for(j=0; j<indx; j++){
			if(i%t[j]==0 && t[j]!=i){
				div++;
				if(div>2){
					break;
				}
			}
		}
		if(div==2){
			many++;
		}
	}
	float floatmany=many;
	float percent;
	char perc='%';
	percent=(floatmany/n)*100;
	printf("\nQuantity of found prime number(s):\n%d\n", many);
	printf("\n%.8f %c of the limit is(are) prime(s).", percent, perc);
	return 0;
}
