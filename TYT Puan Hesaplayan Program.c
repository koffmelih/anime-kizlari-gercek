#include <stdio.h>
#define TR 3.3
#define MAT 3.3
#define SOS 3.4
#define FEN 3.4


int main(){

float obp,tr,mat,sos,fen,tr1,mat1,sos1,fen1,puan,puanobp;
	
	printf("TURKCE NETINIZI GIRINIZ \n: ");
		scanf("%f", &tr);
	printf("MATEMATIK NETINIZI GIRINIZ \n: ");
		scanf("%f", &mat);
	printf("FEN NETINIZI GIRINIZ \n: ");
		scanf("%f", &fen);
	printf("SOS NETINIZI GIRINIZ \n: ");
		scanf("%f", &sos);
	printf("OBP'nizi giriniz \n: ");
		scanf("%f", &obp);	
tr1 = tr * TR;
mat1 = mat * MAT;
sos1 = sos * SOS;
fen1 = fen * FEN;

puanobp = tr1+mat1+sos1+fen1+100+(obp*0.6);
puan = tr1+mat1+sos1+fen1+100;
	printf("Ham Puaniniz : %f",puan);
	printf("\nYerlestirme Puaniniz : %f",puanobp);

	return 0;
}

