#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,S,P;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if((a+b-c)&&(a+c-b)&&(b+c-a)>0){
		int CV= (a+b+c);
		printf("Chu vi cua tam giac:%d\n",CV);
		int P= (a+b+c)/2;
		int S= (sqrt(P*(P-a)*(P-b)*(P-c)));
		printf("Dien tich cua tam giac:%d\n",S);
	}else{
		printf("ba canh nay khong phai la ba canh cua tam giac");
		
	}
		
	}

	
	

		
		




