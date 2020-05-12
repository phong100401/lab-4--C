#include<stdio.h>
int main(){
	float feet, inch, cm;
	printf("nhap so (cm): \n");
	scanf("%f",&cm);
	inch = cm/2.54;
	feet= inch/12;
	printf("%.1f cm la %d feet %.1f inch \n",cm, (int)feet, inch);
	return 0;
}
