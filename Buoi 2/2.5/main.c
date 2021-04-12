#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int J,t,g;
	int const gd=3500;
	int const d=24;
	int const m=30;
	printf("Nhap vao don vi cong(don vi Jun): ");
	scanf("%d", &J);
	printf("Nhap vao thoi gian tieu thu(don vi giay): ");
	scanf("%d", &t);
	float P=(float)J*t;
	printf("Cong suat su dung la: P= %.4f kW.h", 3.6*P);
	printf("\nTien dien hang thang la: %.0f vnd", 3.6*P*m*gd*d);
}
