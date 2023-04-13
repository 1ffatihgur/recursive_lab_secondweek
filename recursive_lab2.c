#include <stdio.h>

int main() 
{
    int dizim[] = {4, 6, 8, 1, 9, 2, 5, 7};
    
    int uzunluk = sizeof(dizim)/sizeof(dizim[0]);
    
    int maks = maksbul(dizim, uzunluk);
    
    printf("En buyuk eleman: %d", maks);
    
    return 0;
}

int maksbul(int array[], int uzunluk) 
{
    if (uzunluk == 1) 
	{
        return array[0];
    }
    else 
	{
        int temp = maksbul(array, uzunluk - 1);
        if (temp > array[uzunluk - 1]) 
		{
            return temp;
        }
        else 
		{
            return array[uzunluk - 1];
        }
    }
}
