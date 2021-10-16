#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main(){

float k0,k0s,k1,k1s,k2,k2s,k3,k3s,k4,k4s,x0,x0s,x1,x1s,x2,x2s,x3,x3s,x4,x4s,x,s0,s1,s2,s3,s4,turev;
unsigned long h;

printf("Terimin katsayisini ve derecesini\nbir bosluk birakarak giriniz\n Ornek : 3 4\n");

printf("Terim 1: ");
	scanf("%f %f",&k0,&x0);
printf("Terim 2: ");
	scanf("%f %f",&k1,&x1);
printf("Terim 3: ");
	scanf("%f %f",&k2,&x2);
printf("Terim 4: ");
	scanf("%f %f",&k3 ,&x3);
printf("Terim 5: ");
	scanf("%f %f",&k4 ,&x4);
	
printf("Denklem: %.0fx^%.0f %.0fx^%.0f %.0fx^%.0f %.0fx^%.0f %.0fx^%.0f\n",k0,x0,k1,x1,k2,x2,k3,x3,k4,x4);

printf("Hangi noktadaki turevini almak istiyorsunuz: ");
	scanf("%f", &x);
//Turev
	//Katsayilar
	k4s = x4 * k4;
	k3s = x3 * k3;
	k2s = x2 * k2;
	k1s = x1 * k1;
	k0s = x0 * k0;	
	//Usler
	x4s = x4-1;
	x3s = x3-1;
	x2s = x2-1;
	x1s = x1-1;
	x0s = x0-1;
	//Usler 2
	s4 =	pow(x,x4s);
	s3 =	pow(x,x3s);
	s2 =    pow(x,x2s);
	s1 =	pow(x,x1s);	
	s0 =	pow(x,x0s);

turev = (k4s*s4) + (k3s*s3) + (k2s*s2) + (k1s*s1) + (k0s*s0);

printf("%f noktasindaki turevi %f : " ,x,turev);

getch();










return 0;
}
//weniger ist mehr
//made by craxiss
