#include<stdio.h>

int a=10;
	
void fonk(void)
{
	a = 40;
	printf("a: %d\n",a);
}

int main()
{
	int a;
	a=30;
	
	printf("%d\n",a);
	fonk();
	printf("%d",a);
	
	
		
}	
