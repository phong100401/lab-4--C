#include<stdio.h>
int main(){
	int a=15;
	printf("kich thuoc cua kieu int : %d byte\nSo nguyen :%d\n",sizeof(int),a);
	float b=3.456;
	printf("\nkich thuoc cua kieu float : %d byte\nSo thuc kieu float :%f\n",sizeof(float),b);
	double c=4.56789;
	printf("\nkich thuoc cua kieu double :%d byte\nSo thuc kieu double :%lf",sizeof(double),c);
	printf("\nkich thuoc cua kieu char :%d byte\n",sizeof(char));
	printf("\nkich thuoc cua kieu long int : %d byte\n",sizeof(long int));
	printf("\nkich thuoc cua long double : %d byte\n",sizeof(long double));
}
