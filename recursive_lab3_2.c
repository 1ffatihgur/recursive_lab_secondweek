#include<stdio.h>

int maksyazdir(int a[], int n)
{
	
	if(n==1)
	{
		return a[0];
	}
	else
	{
		int enbuyuk = maksyazdir(a,n-1);
	}
	
	if(a[n-1] > enbuyuk)
	{
		return a[n-1];
	}
	else
	{
		return enbuyuk;
	}
	
}



int main()
{
	
	int dizi[5] = {23,43,12,5,2};	
	
	maksyazdir(dizi,5);
	
	
	return 0;
}
