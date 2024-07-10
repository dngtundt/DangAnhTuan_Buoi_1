#include <stdio.h>

int main()
{
	int a, b, c;
	float d;
	printf("Nhap vao lan luot a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	d = c / (a - b);
	printf("Ket qua la: %f", d);
	return 0;
}