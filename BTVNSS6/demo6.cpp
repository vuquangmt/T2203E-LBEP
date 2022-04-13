#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d", &n);
	
	bool f = true;
	int m=n;
	while(m!=0){
		int sodu = m%10;
		if(sodu%2==0){
			f= false;
			printf("%d khong phai toan chu so le", n);
			break;
		}
		m/=10;
	}
	if(f){
		printf("%d toan chu so le", n);
	}
	
}
