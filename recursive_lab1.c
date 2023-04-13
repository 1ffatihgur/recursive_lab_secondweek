#include<stdio.h>

int topla(int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		return topla(n-1) + n;	
	}		
}

int main()
{
	
	int a; 
	
	printf("bir sayi giriniz: ");
	scanf("%d",&a);
	
	printf("sayilarin toplami: %d",topla(a));	
	
	
	
	return 0;
}
