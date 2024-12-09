#include<stdio.h>
#include<math.h>

int main()
{
	int so_tien_gui;
	printf("Nhap vao so tien gui: ");
	scanf("%d", &so_tien_gui);
	float lai_suat;
	printf("Nhap lai suat: ");
	scanf("%f", &lai_suat);
	int month;
	printf("Nhap vao so thang: ");
	scanf("%d", &month);
	
	float tien_nhan_duoc = so_tien_gui * pow((1 + lai_suat), month);
	float tong_tien_lai = tien_nhan_duoc - so_tien_gui;
	
	printf("Tien lai: %.3f\n", tong_tien_lai);
	printf("tien nhan duoc: %.3f\n", tien_nhan_duoc);
	return 0;
}
