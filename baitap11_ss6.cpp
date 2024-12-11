#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int dem = 0;
	int a = 2;
	
	while(dem < n)
	{
		bool prime = true;
		
		for(int i = 2; i <= sqrt(a); i++)
		{
			if(a % i == 0)
			{
				prime = false;
				break;
			}		
		}
		if(prime)
		{
			printf("%d ", a);
			dem++;
		}
		
		a++;
	}
	
	
	return 0;
}
