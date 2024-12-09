#include<stdio.h>

int main()
{
	int mat_khau = 123456;
	int n;
	printf("Nhap mat khau: ");
	scanf("%d", &n);
	
	while(true)
	{
		if(n == mat_khau)
		{
			printf("Hop le\nMat khau la %d", n);
			break;
		}
		else
		{
			printf("Sai mat khau nhap lai mat khau: ");
			scanf("%d", &n);
		}
	}
	
	
	return 0;
}
