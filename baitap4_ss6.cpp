#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	
	int den_ta = pow(b, 2) - 4 * a * c;
	
	if(den_ta < 0)
	{
		printf("Phuong trinh vo nhiem");
	}
	else if(den_ta == 0)
	{
		float x1 = -b / (2*a);
		float x2 = -b / (2*a);
		printf("Phuong trinh co 1 nghiem kep x1 = x2 = %.2f\n", x1);
	}
	else
	{
		float x1 = (-b + sqrt(den_ta)) / (2 * a);
		float x2 = (-b - sqrt(den_ta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet: ");
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}
	
	return 0;
}
