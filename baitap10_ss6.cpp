#include<stdio.h>
#include<math.h>

int ktra_so_nguyen_to(int n);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(ktra_so_nguyen_to(n) == 1)
	{
		printf("%d la so nguyen to\n", n);
	}
	else
	{
		printf("%d khong phai so nguyen to", n);
	}
	
	return 0;
}

int ktra_so_nguyen_to(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
		else return 1;
	}
	
}
