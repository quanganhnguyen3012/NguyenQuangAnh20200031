#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,n,b=1;
	printf("Nhap vao so nguyen a:");
	scanf("%d", &a);
	printf("Nhap vao n:");
	scanf("%d", &n);
    b=b<<(n-1);
    if(a&b==0)
    {
    	printf("Bit o vi tri n cua a la bit 0, tra ve a bang= %d", a);
    }
    else
    {
    	printf("Bit o vi tri n cua a la bit 1, tra ve a bang= %d", a-b);
    }
}
