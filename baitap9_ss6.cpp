#include<stdio.h>
#include<math.h>

int ktra_so_Armstrong(int n);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	while(n < 100 || n > 999)
	{
		printf("Nhap so co 3 chu so: ");
		scanf("%d", &n);
	}
	
	if(ktra_so_Armstrong(n) == n)
	{
		printf("%d la so Armstrong", n);
	}
	else
	{
		printf("%d khong phai la so Armstrong", n);
	}
	
	return 0;
}

int ktra_so_Armstrong(int a)
{
	float sum = 0;
	while(a > 0)
	{
		int temp = a % 10;
		sum += pow(temp, 3);
		a = a / 10;
	}
	return sum;
}
