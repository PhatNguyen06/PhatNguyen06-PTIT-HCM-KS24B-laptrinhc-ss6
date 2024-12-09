#include<stdio.h>

int main()
{
	int arr[5];
	int dem_chan = 0, dem_le = 0;
	
	
	for(int i = 1; i <= 5; i++)
	{
		printf("Nhap so thu %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 1; i <= 5; i++)
	{
		if(arr[i] % 2 == 0)
		{
			dem_chan++;
		}
		else
		{
			dem_le++;
		}
	}
	printf("Tong co %d so chan da nhap\n", dem_chan);
	printf("Tong co %d so le da nhap\n", dem_le);
	
	return 0;
}
