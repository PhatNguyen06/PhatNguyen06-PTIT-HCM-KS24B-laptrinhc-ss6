#include<stdio.h>

int main()
{
	int arr[5];
	int tong_so_chan = 0, tong_so_le = 0;
	
	
	for(int i = 1; i <= 5; i++)
	{
		printf("Nhap so thu %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 1; i <= 5; i++)
	{
		if(arr[i] % 2 == 0)
		{
			tong_so_chan += arr[i];
		}
		else
		{
			tong_so_le += arr[i];
		}
	}
	printf("Tong cac so chan: %d\n", tong_so_chan);
	printf("Tong cac so le: %d\n", tong_so_le);
	
	return 0;
}
