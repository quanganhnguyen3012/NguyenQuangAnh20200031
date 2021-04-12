#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n;
	printf("Nhap vao so n:");
	scanf("%d", &n);
	printf("Gia tri cua 2^n la: %ld", 2<<(n-1));
}
