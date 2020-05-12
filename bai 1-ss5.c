#include<stdio.h>
int main(){
	int s, m=3, n=5, r, t;
	float x=3.0,y;
	t=n/m; printf("ket qua la %d \n",t);
	r=n%m; printf("ket qua la %d \n",r);
	y=n/m; printf("ket qua la %f \n",y);
	t=x*y-m/2; printf("ket qua la %d \n",t);
	x=x*2.0; printf("ket qua la %f \n",x);
	s=(m+n)/r; printf("ket qua la %d \n",s);
	y=--n; printf("ket qua la %f \n",y);
	return 0;
}
