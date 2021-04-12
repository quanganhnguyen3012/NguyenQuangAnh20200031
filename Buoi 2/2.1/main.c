#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,b;
	printf("Nhap vao 2 so a,b:");
	scanf("%d %d", &a, &b);
	printf("Hieu 2 so la: %d", a+1+~b);
}
