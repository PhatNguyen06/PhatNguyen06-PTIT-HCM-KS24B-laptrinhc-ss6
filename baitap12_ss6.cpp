#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a = 0;
	int b = 1;
	int Fibonacci;
	int dem = 0;
	
	int i = 0;
	for (int i = 0; i < n; i++) 
    {
        if (i == 0) {
            Fibonacci = a;
        } else if (i == 1) {
            Fibonacci = b;
        } else {
            Fibonacci = a + b; 
            a = b;
            b = Fibonacci;
        }
        printf("%d ", Fibonacci); 
    }
	
	
	
	return 0;
}
