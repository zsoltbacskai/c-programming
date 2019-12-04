#include <stdio.h>
#include <stdlib.h>

int main(){
	float x,y,u=1,w=1,p=1,constnt=0,x1,y1,u1=1,w1=0,p1=0,const1,x2,y2,u2=0,w2=1,p2=0,const2;
	printf("Maximalizalas\n");
	printf("Adja meg X egyutthatojat a celfuggvenyben:\n");
	scanf("%f", &x);
	printf("Adja meg Y egyutthatojat a celfuggvenyben:\n");
	scanf("%f", &y);
	printf("Adja meg X1 egyutthatojat:\n");
	scanf("%f", &x1);
	printf("Adja meg Y1 egyutthatojat:\n");
	scanf("%f", &y1);
	printf("Adja meg az elso egyenlotlenseg konstansat:\n");
	scanf("%f", &const1);
	printf("Adja meg X2 egyutthatojat:\n");
	scanf("%f", &x2);
	printf("Adja meg Y2 egyutthatojat:\n");
	scanf("%f", &y2);
	printf("Adja meg a masodik egyenlotlenseg konstansat:\n");
	scanf("%f", &const2);
	printf("\nFeladat\nP = (%.2f)x + (%.2f)y\n", x, y);
	printf("(%.2f)x + (%.2f)y <= (%.2f)\n", x1, y1, const1);
	printf("(%.2f)x + (%.2f)y <= (%.2f)\n", x2, y2, const2);
	printf("x,y >= 0\n\n");
	
	float x3=(-1)*x,y3=(-1)*y,u3=0,w3=0,p3=1,const3=constnt;
	printf("Slack valtozok hozzaadasa utan:\n");
	printf("(%.2f)x + (%.2f)y + (%.2f)u = %.2f\n", x1, y1, u,const1);
	printf("(%.2f)x + (%.2f)y + (%.2f)w = %.2f\n", x2, y2, w, const2);
	printf("(%.2f)x + (%.2f)y + (%.2f)P = %.2f\n", (-1)*x, (-1)*y, p, constnt);
	
	//Feltöltjük a matrix 2 dimenziós tömböt a változókkal és kiírjuk a tartalmát.
	int i,j;
	float matrix[3][6]={{x1,y1,u1,w1,p1,const1},{x2,y2,u2,w2,p2,const2},{x3,y3,u3,w3,p3,const3}};
	printf("\n\tx\ty\tu\tw\tP\n");
	for(i=0; i<3; i++){
		printf("R%d\t", i+1);
		for(j=0; j<6; j++){
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	//Megkeressük a harmadik sorban a legkisebb elemet és eltároljuk annak az indexét a pivotCol-ban.
	int pivotCol=0; //Ez gyakorlatilag azt mutatja meg, hogy melyik oszlopban lesz a pivotElement.
	float minimum=matrix[2][0];
	for(j=0; j<3; j++){
		if(matrix[2][j]<matrix[2][0] && j!=3){
			minimum=matrix[2][j];
			pivotCol=j;
		}
	}
	//Megtaláltuk az oszlopot. A harmadik sor felett két együttható lesz ebben az oszlopban. Elosztjuk velük a hozzájuk tartozó konstansokat.
	float const1Div=matrix[0][5]/(matrix[0][pivotCol]);
	float const2Div=matrix[1][5]/(matrix[1][pivotCol]);
	float pivotElement;
	int pivotRow=0; //Ebben a sorban lesz a pivotElement.
	//A pivotElement tulajdonképpen abban a sorban lesz, ahol a fenti osztások hányadosa kisebb.
	if(const1Div<const2Div){
		pivotElement=matrix[0][pivotCol];
	}else{
		pivotElement=matrix[1][pivotCol];
		pivotRow++;
	}
	//Megtaláltuk a pivotElement-et.
	//Most 1-gyel egyenlővé tesszük a pivotElementet, úgy, hogy annak a reciprokával szorozzuk a sorának az összes elemét.
	float pivotReciprocal=1/matrix[pivotRow][pivotCol];
	for(j=0; j<6; j++){
		matrix[pivotRow][j]*=pivotReciprocal;
	}
	printf("\n\tx\ty\tu\tw\tP\n");
	for(i=0; i<3; i++){
		printf("R%d\t", i+1);
		for(j=0; j<6; j++){
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	//Létrehozunk egy segédvektort.
	float help[6];
	for(i=0; i<6; i++){
			help[i]=0;
	}
	//Még mindig a matrix[pivotRow][pivotCol] a pivotElement. Most az (alatta és felette) vagy (alatta és azalatt) lévő együtthatókat akarjuk 0-vá tenni.
	//Ez a felette lévő együttható.
	if(pivotRow==1){
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow-1][pivotCol]*matrix[pivotRow][i];
		}
		for(i=0; i<6; i++){
		matrix[pivotRow-1][i]-=help[i];
		}
	}else{//Mivel a pivotRow értéke 0 vagy 1 lehet, ezért, ha nem 1, akkor 0... ebben az esetben először a második (1-es indexű) sorban kell 0-vá tenni az együtthatót.
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow+1][pivotCol]*matrix[pivotRow][i];	
		}
		for(i=0; i<6; i++){
			matrix[pivotRow+1][i]-=help[i];
		}
	}
	//Ez az alatta lévő együttható.
	if(pivotRow==1){
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow+1][pivotCol]*matrix[pivotRow][i];
		}
		for(i=0; i<6; i++){
		matrix[pivotRow+1][i]-=help[i];
		}
	}else{//Mivel a pivotRow értéke 0 vagy 1 lehet, ezért, ha nem 1, akkor 0... ebben az esetben itt a harmadik (2-es indexű) sorban kell 0-vá tenni az együtthatót.
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow+2][pivotCol]*matrix[pivotRow][i];	
		}
		for(i=0; i<6; i++){
			matrix[pivotRow+2][i]-=help[i];
		}
	}	
	printf("\n\tx\ty\tu\tw\tP\n");
	for(i=0; i<3; i++){
		printf("R%d\t", i+1);
		for(j=0; j<6; j++){
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	//Most újra megvizsgáljuk a harmadik sort és megkeressük a legkisebb értékének indexét, amit a pivotCol-ban tárolunk. Innentől ismétlődnek a lépések...
	pivotCol=0; //Ez gyakorlatilag azt mutatja meg, hogy melyik oszlopban lesz a pivotElement.
	minimum=matrix[2][0];
	for(j=0; j<3; j++){
		if(matrix[2][j]<minimum && j!=3){
			minimum=matrix[2][j];
			pivotCol=j;
		}
	}
	//Megtaláltuk az oszlopot. A harmadik sor felett két együttható lesz ebben az oszlopban. Elosztjuk velük a hozzájuk tartozó konstansokat.
	const1Div=matrix[0][5]/(matrix[0][pivotCol]);
	//printf("\n\n%.2f", const1Div);
	const2Div=matrix[1][5]/(matrix[1][pivotCol]);
	//printf("\n\n%.2f", const2Div);
	pivotRow=0; //Ebben a sorban lesz a pivotElement.
	//A pivotElement tulajdonképpen abban a sorban lesz, ahol a fenti osztások hányadosa kisebb.
	pivotElement=0;
	if(const1Div<const2Div){
		pivotElement=matrix[0][pivotCol];
	}else{
		pivotElement=matrix[1][pivotCol];
		pivotRow++;
	}
	//Megtaláltuk a pivotElement-et.
	//Most 1-gyel egyenlővé tesszük a pivotElementet, úgy, hogy annak a reciprokával szorozzuk a sorának az összes elemét.
	pivotReciprocal=1/matrix[pivotRow][pivotCol];
	for(j=0; j<6; j++){
		matrix[pivotRow][j]*=pivotReciprocal;
	}
	printf("\n\tx\ty\tu\tw\tP\n");
	for(i=0; i<3; i++){
		printf("R%d\t", i+1);
		for(j=0; j<6; j++){
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	//Még mindig a matrix[pivotRow][pivotCol] a pivotElement. Most az (alatta és felette) vagy (alatta és azalatt) lévő együtthatókat akarjuk 0-vá tenni.
	//Ez az alatta lévő együttható.
	if(pivotRow==0){
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow+1][pivotCol]*matrix[pivotRow][i];
		}
		for(i=0; i<6; i++){
			matrix[pivotRow+1][i]-=help[i];
		}
	}else{//Ha a pivotRow==1, akkor ez az else ág így fog az alatta lévő együtthatóra mutatni.
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow+1][pivotCol]*matrix[pivotRow][i];	
		}
		for(i=0; i<6; i++){
			matrix[pivotRow+1][i]-=help[i];
		}
	}
	//Ez a kettővel alatta lévő együttható.
	if(pivotRow==0){
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow+2][pivotCol]*matrix[pivotRow][i];
		}
		for(i=0; i<6; i++){
		matrix[pivotRow+2][i]-=help[i];
		}
	}else{//Ha a pivotRow==1, akkor ez az else ág felette lévő együtthatóra fog mutatni.
		for(i=0; i<6; i++){
			help[i]=matrix[pivotRow-1][pivotCol]*matrix[pivotRow][i];	
		}
		for(i=0; i<6; i++){
			matrix[pivotRow-1][i]-=help[i];
		}
	}
	printf("\n\tx\ty\tu\tw\tP\n");
	for(i=0; i<3; i++){
		printf("R%d\t", i+1);
		for(j=0; j<6; j++){
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	//Most már kiírhatjuk a változók értékét.
	if(matrix[0][0]==0 && matrix[0][1]==1){
		y=matrix[0][5];
	}else{
		x=matrix[0][5];
	}
	if(matrix[1][0]==1 && matrix[1][1]==0){
		x=matrix[1][5];
	}else{
		y=matrix[1][5];
	}
	if(matrix[2][0]==0 && matrix[2][1]==0 && matrix[2][4]==1){
		p=matrix[2][5];
	}
	//A slack változókat 0-val egyenlővé tehetjük.
	u=0;
	w=0;
	printf("\n\nx:%.2f y:%.2f P:%.2f u:%.2f w:%.2f", x, y, p, u, w);
	return 0;
}
