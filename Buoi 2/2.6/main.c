#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int r;
	double const pi=3.121592654;
	printf("Nhap vao ban kinh hinh tron(cm):");
	scanf("%d", &r);
	printf("Duong kinh hinh tron la: %d cm", 2*r);
	printf("\nDien tich hinh tron la: %.3f cm^2", pi*r*r);
	printf("\nChu vi hinh tron la: %.3f cm", 2*pi*r);
}
