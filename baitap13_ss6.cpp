#include<stdio.h>

int main()
{
	int day, month;
	printf("Nhap ngay: ");
	scanf("%d", &day);
	printf("Nhap thang: ");
	scanf("%d", &month);
	
	if (month < 1 || month > 12 || day < 1 || day > 31 ||
        (month == 2 && day > 29) || 
        (month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        printf("Ngay thang khong hop le!\n");
    	return 1;
    }
	
	if((month == 3 && day >= 21 && day <= 31) || (month == 4 && day >= 1 && day <= 20))
	{
		printf("Bach Duong\n");
	}
	if((month == 4 && day >= 21 && day <= 30) || (month == 5 && day >= 1 && day <= 20))
	{
		printf("Kim Nguu\n");
	}
	if((month == 5 && day >= 21 && day <= 31) || (month == 6 && day >= 1 && day <= 21))
	{
		printf("Song tu\n");
	}
	if((month == 6 && day >= 22 && day <= 30) || (month == 7 && day >= 1 && day <= 22))
	{
		printf("Cu Giai\n");
	}
	if((month == 7 && day >= 23 && day <= 31) || (month == 8 && day >= 1 && day <= 22))
	{
		printf("Su Tu\n");
	}
	if((month == 8 && day >= 23 && day <= 31) || (month == 9 && day >= 1 && day <= 22))
	{
		printf("Xu Nu\n");
	}
	if((month == 9 && day >= 23 && day <= 30) || (month == 10 && day >= 1 && day <= 23))
	{
		printf("Thien Binh\n");	
	}
	if((month == 10 && day >= 24 && day <= 31) || (month == 11 && day >= 1 && day <= 22))
	{
		printf("Bo Cap\n");
	}
	if((month == 11 && day >= 23 && day <= 30) || (month == 12 && day >= 1 && day <= 21))
	{
		printf("Nhan Ma\n");
	}
	if((month == 12 && day >= 22 && day <= 31) || (month == 1 && day >= 1 && day <= 19))
	{
		printf("Ma Ket\n");
	}
	if((month == 1 && day >= 20 && day <= 31) || (month == 2 && day >= 1 && day <= 18))
	{
		printf("Bao Binh\n");
	}
	if((month == 2 && day >= 19 && day <= 29) || (month == 3 && day >= 1 && day <= 20))
	{
		printf("Song ngu\n");
	}
	
	return 0;
}
