#include <stdio.h>
#include <stdlib.h>

int main(){
	int islem,tutar,bakiye,bnb,btc,eth,coin,miktarkontrol;
	bakiye = 1000;
printf("Borsaya Hosgeldiniz!\nISLEMLER\n\n1:Para Aktarma\n2:Para Cekme\n3:Coin Alma\n4:Borsadan Cikma\n\n\nIsleminizi Giriniz: ");
	scanf("%d",&islem);

switch (islem) {
	
	case 1: 
		printf("Aktarmak Istediginiz Miktari Giriniz: ");
			scanf("%d",&tutar);
		bakiye = bakiye + tutar;
		printf("Yeni Bakiyeniz: %d ",bakiye);
	break;
	
	case 2:
		printf("Cekmek Istediginiz Miktari Giriniz: ");
			scanf("%d",&tutar);
		bakiye = bakiye - tutar;
		printf("Yeni Bakiyeniz: %d ",bakiye);
	break;
	
	
	
	case 3:
		printf("COINLER\n\n1:BNB\n2:BTC\n3:ETH");
			scanf("%d",&coin);
		switch (coin){
		
			case 1:
				printf("BNB Fiyati = 3.5\nAlmak Istediginiz BNB Miktarini Giriniz: ");
					scanf("%d",&bnb);
					
					miktarkontrol = bnb*3.5;
					if (bnb > 300) printf("Borsada belirtilen miktar kadar BNB bulunmamaktadir");
					
					else if (miktarkontrol > bnb) 
					{ 
						if (bnb*3.5>bakiye) printf("Yeterli Bakiyeniz Bulunmamaktadir...");
						
						else {
						bakiye = bakiye - (bnb*3.5);
						printf("Yeni Bakiyeniz : %d ",bakiye);
				             }
					}
					else printf("Hatali islem girdiniz:");
			break;
			
			
			case 2:
				printf("BTC Fiyati = 100\nAlmak Istediginiz BTC Miktarini Giriniz: ");
					scanf("%d",&btc);
					
					miktarkontrol = btc*100;
					if (btc > 100) printf("Borsada belirtilen miktar kadar BTC bulunmamaktadir");
					
					else if (miktarkontrol > btc) 
					{ 
						if (btc*100>bakiye) printf("Yeterli Bakiyeniz Bulunmamaktadir...");
						
						else {
						bakiye = bakiye - (btc*100);
						printf("Yeni Bakiyeniz : %d ",bakiye);
				             }
					}
					else printf("Hatali islem girdiniz:");
			break;
			
			
			case 3:
				printf("ETH Fiyati = 50\nAlmak Istediginiz ETH Miktarini Giriniz: ");
					scanf("%d",&eth);
					
					miktarkontrol = eth*50;
					if (eth > 300) printf("Borsada belirtilen miktar kadar ETH bulunmamaktadir");
					
					else if (miktarkontrol > eth) 
					{ 
						if (eth*50>bakiye) printf("Yeterli Bakiyeniz Bulunmamaktadir...");
						
						else {
						bakiye = bakiye - (eth*50);
						printf("Yeni Bakiyeniz : %d ",bakiye);
				             }
					}
					else printf("Hatali islem girdiniz:");
					}
					
			break;
			
			
				
	case 4: printf("Borsa Kapaniyor");
	break;	
				}


return 0;
}
//weniger ist mehr
//made by craxiss
