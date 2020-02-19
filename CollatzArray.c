#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	The following iterative sequence is defined for the set of positive integers:
	n › n/2 (n is even)
	n › 3n + 1 (n is odd)
	Using the rule above and starting with 13, we generate the following sequence:
	13 › 40 › 20 › 10 › 5 › 16 › 8 › 4 › 2 › 1
	It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
	Which starting number, under one million, produces the longest chain?
	NOTE: Once the chain starts the terms are allowed to go above one million.	
	*/
	int max,c,i,count,n,l=0,begin=13,end=1000,lth=(end-begin)+1,t[lth],u[lth];
	for(c=begin; c<=end; c++){
		n=c;
		count=1;
		while(n!=1){
			if(n%2==0){
				n/=2;
			}else{
				n=(3*n)+1;
			}
			count++;
		}
		t[l]=c;
		u[l]=count;
		l++;
	}
	max=u[0];
	for(i=1; i<lth; i++){
		if(u[i]>max){
			max=u[i];
		}
	}
	int indx=0;
	i=0;
	while(u[i]!=max){
		indx++;
		i++;
	}
	printf("%d -> %d", t[indx], u[indx]);
	return 0;
}
