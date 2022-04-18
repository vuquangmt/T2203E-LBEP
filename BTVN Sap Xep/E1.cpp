#include <stdio.h>
#include <math.h>
int main(){

	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);

	int a[n];
	for(int i=0;i<n;i++){
		printf(" Nhap so %d: ",i);
		scanf("%d",&a[i]);
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);

	int dist=abs(a[0]-x);
	int m=0;
	for(int i=0; i<n;i++){
		if (abs(a[i]-x)>dist){
			dist=abs(a[i]-x);
			m=a[i];
		}
	}
	printf("gia tri xa x nhat la: %d", m);
}
