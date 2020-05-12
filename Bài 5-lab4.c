#include<stdio.h>
int main(){
	float height,top,bottom,s;
	printf("nhap gia tri height : \n");
	scanf("%f",&height);
	printf("nhap gia tri top : \n");
	scanf("%f",&top);
	printf("Nhap gia tri bottom : \n");
	scanf("%f",&bottom);
	s=((top*bottom)*height)/2;
	printf("Dien tich hinh thang la %.1f",s);
	return 0;
}
