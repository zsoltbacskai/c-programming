/* Írj programot, mely bekér két egész számot, s kiírja a közös számjegyeit! */
#include <stdio.h>
int main(){
	int a,b,ha,hb,mod,div,j,n0=-1,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,m0=-1,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0,m9=0;
	printf("Adja meg az elso szamot:\n");
	scanf("%d", &a);
	printf("\n");
	printf("Adja meg a masodik szamot:\n");
	scanf("%d", &b);
	if(a<0){
		a*=(-1);
	}
	if(b<0){
		b*=(-1);
	}
	printf("\n");
	ha=a;
	mod=10;
	div=1;
	while(ha>=1){
		ha=a;
		ha=(ha%mod)/div;
		if(ha==0){
			n0++;
		}
		else if(ha==1){
			n1++;
		}
		else if(ha==2){
			n2++;
		}
		else if(ha==3){
			n3++;
		}
		else if(ha==4){
			n4++;
		}
		else if(ha==5){
			n5++;
		}
		else if(ha==6){
			n6++;
		}
		else if(ha==7){
			n7++;
		}
		else if(ha==8){
			n8++;
		}
		else if(ha==9){
			n9++;
		}
		mod*=10;
		div*=10;
	}
	//printf("n0=%ddb\nn1=%ddb\nn2=%ddb\nn3=%ddb\nn4=%ddb\nn5=%ddb\nn6=%ddb\nn7=%ddb\nn8=%ddb\nn9=%ddb", n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
	//printf("\n\n");
	hb=b;
	mod=10;
	div=1;
	while(hb>=1){
		hb=b;
		hb=(hb%mod)/div;
		if(hb==0){
			m0++;
		}
		else if(hb==1){
			m1++;
		}
		else if(hb==2){
			m2++;
		}
		else if(hb==3){
			m3++;
		}
		else if(hb==4){
			m4++;
		}
		else if(hb==5){
			m5++;
		}
		else if(hb==6){
			m6++;
		}
		else if(hb==7){
			m7++;
		}
		else if(hb==8){
			m8++;
		}
		else if(hb==9){
			m9++;
		}
		mod*=10;
		div*=10;
	}
	//printf("m0=%ddb\nm1=%ddb\nm2=%ddb\nm3=%ddb\nm4=%ddb\nm5=%ddb\nm6=%ddb\nm7=%ddb\nm8=%ddb\nm9=%ddb", m0,m1,m2,m3,m4,m5,m6,m7,m8,m9);
	printf("Kozos szamjegyek:\n");
	if(n0>0 && m0>0){
		printf("0 ");
	}
	if(n1>0 && m1>0){
		printf("1 ");
	}
	if(n2>0 && m2>0){
		printf("2 ");
	}
	if(n3>0 && m3>0){
		printf("3 ");
	}
	if(n4>0 && m4>0){
		printf("4 ");
	}
	if(n5>0 && m5>0){
		printf("5 ");
	}
	if(n6>0 && m6>0){
		printf("6 ");
	}
	if(n7>0 && m7>0){
		printf("7 ");
	}
	if(n8>0 && m8>0){
		printf("8 ");
	}
	if(n9>0 && m9>0){
		printf("9 ");
	}
	return 0;
}
