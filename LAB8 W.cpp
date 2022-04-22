#include <math.h>
//1.tong cac chu so cua n
int sumDgt(int n){
	int sum=0;
	while (n!=0) {
		sum+=n%10;
		n/=10;	
	}
	return sum;
}
//2.chu vi tam giac
int pmtTri(int a, int b, int c){
	return a+b+c;
}
//3.dien tich tam giac
int areaTri(int a, int b, int c){
	return sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
}
//4.UCNN
int hiComFac (int a, int b){
	for (int i=a; i>0; i--){
		if (a%i==0&&b%i==0){
			return i;
		}
	}
}
//5.BCNN
int loComMul(int a, int b){
	for(int i=a; ;i++){
		if (i%a==0&&i%b==0){
			return i;
		}
	}
}
