#include<stdio.h>
#include<math.h>
int main(){
	float toan,ly,hoa,tong,tb;
	printf("nhap diem toan : \n");
	scanf("%f",&toan);
	printf("nhap diem ly : \n");
	scanf("%f",&ly);
	printf("nhap diem hoa : \n");
	scanf("%f",&hoa);
	tong=toan+ly+hoa;
	printf("Tong diem 3 mon la %.1f \n",tong);
	tb=tong/3;
	printf("Diem Trung Binh 3 mon la %.1f \n",tb);
	return 0;
}
