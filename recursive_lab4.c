#include <stdio.h>

int EBOB(int a, int b);


int EBOB(int k, int m) 
{
    if (m == 0) 
	{
        return k;
    } 
	
	else 
	{
        return EBOB(m, k % m);
    }
}


int main() 
{
    int x, y, sonuc;
    
    printf("iki sayi gir: ");
    
    scanf("%d %d", &x, &y);
    
    sonuc = EBOB(x, y);
    
    printf("%d ile %d nin en buyuk ortak bolenleri: %d", x, y, sonuc);
    
    return 0;
    
}


