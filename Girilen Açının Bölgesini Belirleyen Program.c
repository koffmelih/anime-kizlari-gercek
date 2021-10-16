#include <stdio.h>

int main(){
	
	int aci;
	
	printf("Acinizi derece cinsinden giriniz:" );
		scanf("%d",&aci);	
	
	if (90 > aci && aci > 0) 
	{
	printf("\naciniz 1. bolgede");
	}
	else if (180 > aci && aci> 90) 
	{
	printf("\naciniz 2. bolgede");
	}
	else if (270 > aci && aci > 180 ) 
	{
	printf("\naciniz 3. bolgede");
	}
	else if (360 > aci && aci > 270) 
	{
	printf("\naciniz 4. bolgede");
	}
	else 
	{
	printf("Aciniz bir bolgede degil.");
	}
	
	
	
	
	
	
	
	return 0;
}
//weniger ist mehr
//made by craxiss
