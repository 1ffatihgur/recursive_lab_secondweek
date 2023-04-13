#include<stdio.h>


int basamaktoplami(int n)
{
	if(n<1)
	{
		return 0;
	}
	
	else
	{
		return n%10 + basamaktoplami(n/10);
	}
	
	
}


int main()
{
	
	int sayi;
	int toplam = 0;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	toplam = basamaktoplami(sayi);
	
	printf("basamak toplamlari: %d",toplam);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
