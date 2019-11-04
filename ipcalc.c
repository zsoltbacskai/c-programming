#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Bacskai Zsolt - PPPCNX */
	int ipdec[4],copyipdec[4],ipbin[32],i,con=256,subnetdec[4],subnetbin[32],netbin[32],netdec[4],sum1=0,sum2=0,sum3=0,sum4=0;
	char cls;
	
	printf("Kerlek adj meg egy valid (0.0.0.0 - 223.255.255.255 / pontokkal egyutt) IPv4 cimet:\n");
	//A osztaly	-	0.0.0.0		-	127.255.255.255	->	255.0.0.0
	//B osztaly	-	128.0.0.0	-	191.255.255.255	->	255.255.0.0
	//C osztaly	-	192.0.0.0	-	223.255.255.255	->	255.255.255.0
	//D osztaly	-	224.0.0.0	-	239.255.255.255	->	Nem definialt
	//E osztaly	-	240.0.0.0	-	255.255.255.255	->	Nem definialt
	scanf("%d.%d.%d.%d", &ipdec[0], &ipdec[1], &ipdec[2], &ipdec[3]);
	while((ipdec[0]<0 || ipdec[0]>255) || (ipdec[1]<0 || ipdec[1]>255) || (ipdec[2]<0 || ipdec[2]>255) || (ipdec[3]<0 || ipdec[3]>255)){
		printf("\nInvalid IP cimet akarsz megadni, probald ujra!\n");
		scanf("%d.%d.%d.%d", &ipdec[0], &ipdec[1], &ipdec[2], &ipdec[3]);
	}
	if(ipdec[0]>=0 && ipdec[0]<=127){
		cls='A';
		subnetdec[0]=255;
		subnetdec[1]=0;
		subnetdec[2]=0;
		subnetdec[3]=0;
	}
	if(ipdec[0]>=128 && ipdec[0]<=191){
		cls='B';
		subnetdec[0]=255;
		subnetdec[1]=255;
		subnetdec[2]=0;
		subnetdec[3]=0;
	}
	if(ipdec[0]>=192 && ipdec[0]<=223){
		cls='C';
		subnetdec[0]=255;
		subnetdec[1]=255;
		subnetdec[2]=255;
		subnetdec[3]=0;
	}
	if(ipdec[0]>=224 && ipdec[0]<=239){
		printf("Multicast cimzes - D osztaly - ezekkel most nem foglalkozunk reszletesebben.");
	}
	else if(ipdec[0]>=240 && ipdec[0]<=255){
		printf("Lefoglalt cimek - E osztaly - ezekkel most nem foglalkozunk reszletesebben.");
	}else{
	for(i=0; i<=3; i++){
		copyipdec[i]=ipdec[i];	
	}
	
	printf("\nOsztaly: %c\n", cls);
	
	printf("\nBinaris IP cim:\n");
	for(i=0; i<=7; i++){
		ipbin[i]=ipdec[0]/(con/=2)%2;
	}
	con=256;
	for(i=8; i<=15; i++){
		ipbin[i]=ipdec[1]/(con/=2)%2;
	}
	con=256;
	for(i=16; i<=23; i++){
		ipbin[i]=ipdec[2]/(con/=2)%2;
	}
	con=256;
	for(i=24; i<=31; i++){
		ipbin[i]=ipdec[3]/(con/=2)%2;
	}
	con=256;
	for(i=0; i<=31; i++){
		if(i==8 || i==16 || i==24){
			printf(".");
		}
		printf("%d", ipbin[i]);
	}
	
	printf("\n\nBinaris alhalozati maszk:\n");
	for(i=0; i<=7; i++){
		subnetbin[i]=subnetdec[0]/(con/=2)%2;
	}
	con=256;
	for(i=8; i<=15; i++){
		subnetbin[i]=subnetdec[1]/(con/=2)%2;
	}
	con=256;
	for(i=16; i<=23; i++){
		subnetbin[i]=subnetdec[2]/(con/=2)%2;
	}
	con=256;
	for(i=24; i<=31; i++){
		subnetbin[i]=subnetdec[3]/(con/=2)%2;
	}
	con=256;
	for(i=0; i<=31; i++){
		if(i==8 || i==16 || i==24){
			printf(".");
		}
		printf("%d", subnetbin[i]);
	}
	
	printf("\n\nDecimalis alhalozati maszk:\n");
	for(i=0; i<=3; i++){
		if(i==1 || i==2 || i==3){
			printf(".");
		}
		printf("%d", subnetdec[i]);
	}
	
	//netbin feltoltese - AND
	for(i=0; i<=31; i++){
		if(ipbin[i]==1 && subnetbin[i]==1){
			netbin[i]=1;
		}else{
			netbin[i]=0;
		}
	}
	
	//HALOZATI CIM	
	//netdec[0]
	for(i=0; i<=7; i++){
		if(netbin[i]==1){
			sum1+=con/=2;
		}else{
			sum1+=0;
			con/=2;
		}
	}
	netdec[0]=sum1;
	con=256;
	
	//netdec[1]
	for(i=8; i<=15; i++){
		if(netbin[i]==1){
			sum2+=con/=2;
		}else{
			sum2+=0;
			con/=2;
		}
	}
	netdec[1]=sum2;
	con=256;
	
	//netdec[2]
	for(i=16; i<=23; i++){
		if(netbin[i]==1){
			sum3+=con/=2;
		}else{
			sum3+=0;
			con/=2;	
		}
	}
	netdec[2]=sum3;
	con=256;
	
	//netdec[3]
	for(i=24; i<=31; i++){
		if(netbin[i]==1){
			sum4+=con/=2;
		}else{
			sum4+=0;
			con/=2;
		}
	}
	netdec[3]=sum4;
	con=256;
	
	printf("\n\nHalozati cim:\n");
	for(i=0; i<=3; i++){
		if(i==1 || i==2 || i==3){
			printf(".");
		}
		printf("%d", netdec[i]);
	}
	
	// A) ELSO IP CIM AZ ALHALOZATON, UTOLSO IP CIM AZ ALHALOZATON, BROADCAST CIM AZ ALHALOZATON, ERVENYES IP CIMEK A HALOZATON
	if(cls=='A'){
		copyipdec[3]=1;
		copyipdec[2]=0;
		copyipdec[1]=0;
		printf("\n\nElso IP cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		copyipdec[3]=254;
		copyipdec[2]=255;
		copyipdec[1]=255;
		printf("\n\nUtolso IP cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		copyipdec[3]=255;
		copyipdec[2]=255;
		copyipdec[1]=255;
		printf("\n\nBroadcast cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		printf("\n\nErvenyes IP cimek a halozaton:\n%d", (256*256*256)-2);
	}
	
	// B) ELSO IP CIM AZ ALHALOZATON, UTOLSO IP CIM AZ ALHALOZATON, BROADCAST CIM AZ ALHALOZATON, ERVENYES IP CIMEK A HALOZATON
	if(cls=='B'){
		copyipdec[3]=1;
		copyipdec[2]=0;
		printf("\n\nElso IP cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		copyipdec[3]=254;
		copyipdec[2]=255;
		printf("\n\nUtolso IP cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		copyipdec[3]=255;
		copyipdec[2]=255;
		printf("\n\nBroadcast cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		printf("\n\nErvenyes IP cimek a halozaton:\n%d", (256*256)-2);
	}
	
	// C) ELSO IP CIM AZ ALHALOZATON, UTOLSO IP CIM AZ ALHALOZATON, BROADCAST CIM AZ ALHALOZATON, ERVENYES IP CIMEK A HALOZATON
	if(cls=='C'){
		copyipdec[3]=1;
		printf("\n\nElso IP cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		copyipdec[3]=254;
		printf("\n\nUtolso IP cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		copyipdec[3]=255;
		printf("\n\nBroadcast cim az alhalozaton:\n");
		for(i=0; i<=3; i++){
			if(i==1 || i==2 || i==3){
				printf(".");
			}
			printf("%d", copyipdec[i]);
		}
		
		printf("\n\nErvenyes IP cimek a halozaton:\n%d", (256*1)-2);
	}
	}
	return 0;
}
