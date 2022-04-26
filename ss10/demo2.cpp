#include <stdio.h>
#include <stdlib.h>
typedef struct Car{
	char nhanHieu[50];
	char soKhung[30];
	char soMay[30];
	char bienSo[20];
	double giaXe;
}Car;

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	Car *ds;
	ds = (Car *)malloc(n*sizeof(Car));
	
	for(int i=0;i<n;i++){
		scanf("%s",(ds+i)->nhanHieu);
		scanf("%1f",&((ds+i)->giaXe));
	}
	
	
}
