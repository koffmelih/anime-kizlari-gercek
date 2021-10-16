#include <stdio.h>
#include <stdlib.h>

int main(){

int s1,s2,s3,toplam;
float ort;
 

printf("Ortalamasi Alinicak 3 Sayiyi Giriniz");

printf("\nSayi 1: ");
scanf("%d", &s1);


printf("\nSayi 2: ");
scanf("%d", &s2);

printf("\nSayi 3: ");
scanf("%d", &s3);	
	
	{
	toplam = s1 + s2 + s3;
	}
	
	{
		ort= (float)(toplam / 3);
	}
	
	printf("Uc Sayinin Ortalamasi : %.2f" , ort);

return 0;	
}

