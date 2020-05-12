#include<stdio.h>
int main(){
	float C,F;
	printf("nhap do C= \n");
	scanf("%f",&C);
	F=C*1.8+32;
	printf("%.1f do C bang %.1f do F \n",C,F);
	return 0;
}
