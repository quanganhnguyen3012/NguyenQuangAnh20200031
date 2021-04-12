#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a;
    printf("Nhap vao chieu cao cua ban: ");
    scanf("%d", &a);
    printf("Vay thi chieu cao cua ban la: %d cm \n", a);
    printf("Vay thi chieu cao cua ban la: %.2f m", (float)a/100);
}
