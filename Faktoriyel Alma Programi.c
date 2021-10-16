#include <stdio.h>

int main(){

int n,i;
i = 1;

printf("Faktoriyelini Almak Istediginiz Sayiyi Giriniz: ");
	scanf("%d",&n);

while(n!=0) {
	printf("%d\n",n);
i = n * i;
	
	
	n--;
	
	
}	

printf("%d",i);



return 0;
}
//weniger ist mehr
//made by craxiss