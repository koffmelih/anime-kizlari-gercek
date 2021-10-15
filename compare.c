#include <stdio.h>
#include <stdlib.h>

int main(){
	
float s1,s2;
printf("Birinci Sayiyi Giriniz: ");
scanf("%f", &s1);

printf("Ikinci Sayiyi Giriniz:");
scanf("%f", &s2);
	
if (s1>s2)	{
    printf("%.2f, %.2f'den buyuk",s1,s2);
}

else if (s1==s2) {
	printf("%.2f ile %.2f esit ",s1,s2);
}
else if (s1<s2) {
	printf("%.2f, %.2f'den kucuk",s1,s2);
}
	
	
	return 0;
}
