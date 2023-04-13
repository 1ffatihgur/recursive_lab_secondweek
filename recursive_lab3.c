#include <stdio.h>
int enbuyuk(int a[], int n) {

if(n==1) {

return a[0];

}
else {

int enbuyugu=enbuyuk(a, n-1);

if (a[n-1] > enbuyugu)return a[n-1];
return enbuyugu;
}

}
int main()
{
int dizi[5] = {5, 23, 28, 7, 1};
printf("Dizinin en büyük elemaný %d", enbuyuk(dizi, 4));

}
