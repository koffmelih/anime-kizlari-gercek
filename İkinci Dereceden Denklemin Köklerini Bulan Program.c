#include <stdio.h>
#include <math.h>

int main() {
	
	float a,b,c,delta;
	double kok1,kok2;

printf("Ikinci Dereceden Denklemin Katsayilarini Giriniz: ");
printf("\nVarsayilan Denklem : a*x^2 + b*x + c");
printf("\n a: ");
scanf("%f",&a);
printf("\n b: ");
scanf("%f",&b);
printf("\n c: ");
scanf("%f",&c);

//kok hesaplama
delta = (b*b) - (4*a*c);
kok1 = (-b+sqrt(delta))/(2*a);
kok2 = (-b-sqrt(delta))/(2*a);

printf("Birinci Kok : %.15g\nIkinci Kok : %.15g",kok1,kok2);

return 0;
}
//weniger ist mehr
//made by craxiss
