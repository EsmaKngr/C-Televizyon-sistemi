#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void BaslangicKismi(uye);
void Fiyat_tv(tv_kod);
void Kargo_uzaklik(km);
int main()
 {

int uye1,km,km_fiyat,uye_no1,hata_kod;
char e;
int kod,fiyat,tv_kod;
int tv_fiyat[4][2]={ {98,13000},
					{63,11000},
					{26,14500},	
					{33,17900} };
char ad[50];

printf("Sistemimize hos geldiniz. Kayit icin adinizi giriniz.\n");
scanf("%c" ,&ad);

for(e=0; e<strlen(ad);e++)
    {
        if(e==0)
            printf("%c",ad[0]);  
		if else(ad[0]==e)
		printf("Sitemizden %15 indirim kazandiniz.\n Kapida odeme yaparken indiriminiz uygulanacaktir.\n");
    }


printf("Sistemimizde uyeliginiz varsa uye numaranizi yoksa sifir giriniz.\n");
scanf("%d" ,&uye1);

{
	
		if (uye1<100 && uye1>9)
		printf("Basarili bir sekilde giris yapilmistir.\n");
		
		else if(uye1<10)
		printf("Misafir girisi yapilmistir.\n");
		
}

int secim=0;
printf("Televizyon siparisi icin 5 'e , televizyon tamiri icin 7 'ye basiniz.\n");
scanf("%d" ,&secim);


switch(secim) {


		case 5:

			printf("Televizyon siparisi adimina geçtiniz.\n Satista bulunan televizyonlarin kodlari ve fiyatlari sunlardir;");
	
		for(kod=0;kod<4;kod++)
		{
		for(fiyat=0;fiyat<2;fiyat++)
		printf("%2d",tv_fiyat[kod][fiyat]);
		
		printf("\n");
		}
	printf("Siparis vermek istediginiz telelvizyon kodunu giriniz.\n");
	scanf("%d",&tv_kod);

Fiyat_tv(tv_kod);


	break;

	case 7:


printf("Uye numaranizi giriniz. Uye degilseniz 0 a basiniz.\n");
	scanf("%d",&uye_no1);

		if(uye_no1<100 && uye_no1>9)
	{
		printf("Uye girisi yapildi.\n");
		
			printf("98, 63, 26, 33.Hangisi sizin televizyon modeliniz?\n");
			scanf("%d",&tv_kod);
			
			printf("1-Zarar görmeyle ilgili.\n 2-Kanallarla ilgili.\n 3-Ses ve görüntüyle ilgili.\n 4_Diger.\n Tamirat gerektiren durumu seçiniz");
			scanf("%d",&hata_kod);
			
			printf("Ev adresinizin magazima olan uzakligini yaziniz.\n");
	scanf("%d",&km);
		Kargo_uzaklik(km);
				
	km_fiyat=(km-20)*12;
	printf("Kargo tutariniz %d 'dir.\n",km_fiyat);
	}
			

	
			break;
}
	printf("Bizi tercih ettiginiz icin tesekkürler.\n");
	
	return 0;
}

void BaslangicKismi(int uye)
{
	
		if (uye<100 && uye>9)
		{
		printf("Basarili bir sekilde giris yapilmistir.\n");
		}
		else if (uye<10)
		{
		printf("Misafir girisi yapilmistir.\n");
		}
}

void Fiyat_tv(int tv_kod)
{
		if(tv_kod==98)
		printf("Bu televizyon 13.000TL'dir.\n Sepetinize eklendi.\n");
	
		if(tv_kod==63)
		printf("Bu televizyon 11.000TL'dir.\n Sepetinize eklendi.\n");
	
		if(tv_kod==26)
		printf("Bu televizyon 14.500TL'dir.\n Sepetinize eklendi.\n");
	
		if(tv_kod==33)
		printf("Bu televizyon 17.900TL'dir.\n Sepetinize eklendi.\n");
}


void Kargo_uzaklik(int km)
{
	if(km<25 && km>20)
		printf("Ekibimiz 3 gün icerisinde adresinize ziyarette bulunacaktir.\n");
	
	else if(km<30 && km>=25)
		printf("Ekibimiz 4 gün icerisinde adresinize ziyarette bulunacaktir.\n");
	
	else if(km<=50 && km>=30)
		printf("Ekibimiz 7 gün icerisinde adresinize ziyarette bulunacaktir.\n");

}


