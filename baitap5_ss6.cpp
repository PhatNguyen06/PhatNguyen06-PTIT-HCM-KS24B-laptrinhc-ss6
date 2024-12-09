#include<stdio.h>

int main()
{
	int day, month, year;
	printf("Nhap thang: ");
	scanf("%d", &month);
	printf("Nhap nam: ");
	scanf("%d", &year);
	
	int ktra_year = 0;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		ktra_year = 1;
	}
	
	switch(month)
	{
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
			day = 31;
			printf("%d ngay", day);
			break;
		case 2:
			if(ktra_year == 1)
			{
				day = 29;
			}
			else
			{
				day = 28;
			}
			printf("%d ngay", day);
			break;
		case 4 : case 6 : case 9 : case 11 :
			day = 30;
			printf("%d ngay", day);
			break;
		default :
			printf("Du lieu khong hop le");
	}
	
	return 0;
}
