#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char vanban[100], check[50], *a;
	printf("Nhap vao van ban:");
	gets(vanban);
	printf("Nhap vao gia tri tim kiem:");
	gets(check);
	fflush(stdin);
	a=strstr(vanban, check);
	if(a!=NULL)
	{
		printf("Gia tri tim kiem co xuat hien trong van ban");
	}
	else
	{
		printf("Gia tri tim kiem khong co trong van ban");
	}
}
