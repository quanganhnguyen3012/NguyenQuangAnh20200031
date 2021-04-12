#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
	int n;
	printf("Nhap vao so giay:");
	scanf("%d", &n);
	int a=n%60;
	int b=(n/60)%60;
	int c=(n/3600);
	printf("%d gio %d phut %d giay", c,b,a);
}
