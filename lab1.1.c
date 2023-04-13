#include<stdio.h>

int hesapla(int dizi[], int sayi)
{
	
	int i,gecmenotu,sayac;
	int ortalama = 0;
	
	printf("gecme notu girin: ");
	scanf("%d",&gecmenotu);
	
	for(i=0; i<100; i++)
	{
		printf("%d. notu girin: ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0; i<100; i++)
	{
		printf("%d ",dizi[i]);
	}
	
	for(i=0; i<100; i++)
	{
		ortalama = ortalama + dizi[i];
		return ortalama;
	}
	
	for(i=0; i<100; i++)
	{
		if(dizi[i] < gecmenotu)
		{
			sayac++;
		}
		printf("dersten kalan: %d",sayac);
	}
	
	
}

int main()
{
	
	int notlar[100];
	
	printf("dizi giriniz: ");
	
	hesapla(notlar,100);
	
	
	
}
