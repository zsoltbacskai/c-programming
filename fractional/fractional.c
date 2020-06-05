#include <stdio.h>
int main(){
	float x=3.1415,y=x;
	if(x!=0){
		float i=1,a=1,b=1;
		if(x<0){
			x*=(-1);
		}
		if(x>0 && x<=0.5){
			b=i/x;
			while(i/b!=x){
				i++;
			}
		}
		else if(x>0.5){
			int temp=x*i;
			float help=temp;
			while(x*i!=help){
				i++;
				temp=x*i;
				help=temp;
			}
			b=i;
			a=b*x;
		}
		int p=a,q=b;
		if(y<0){
			p*=(-1);
			printf("%f = %d / %d", y, p, q);
		}else{
			printf("%f = %d / %d", x, p, q);
		}
			
	}else{
		printf("0 is pointless.");
	}
	return 0;
}
