#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char ten[100],diachi[100],a[100];
	printf("Nhap vao ten cua ban:");
	gets(ten);
	strcpy(a,ten);
	strcat(a, " lam viec o ");
	printf("Nhap vao dia chi cua ban:");
	gets(diachi);
	strcat(a, diachi);
	printf("%s", a);
}
