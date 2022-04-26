#include <stdio.h>
struct SinhVien{
char sName[50];
int sAge;
double sMark;
}
int main(){
	struct SinhVien sv1;
	struct SinhVien sv2;
	
	printf("Nhap ten sv1:");
	scanf("%s",sv1.sName);
	printf("Nhap tuoi sv1:");
	scanf("%d",&sv1.sAge);
	printf("Nhap diem sv1:");
	scanf("%1f",&sv1.sMark);
	
	printf("Nhap ten sv2:");
	scanf("%s",sv2.sName);
	printf("Nhap tuoi sv2:");
	scanf("%d",&sv2.sAge);
	printf("Nhap diem sv2:");
	scanf("%1f",&sv2.sMark);
	
	SinhVien T2203E[25];
	for(int i=0;i<25;i++){
	printf("Nhap ten sv:");
	scanf("%s",T2203E[i].sName);
	printf("Nhap tuoi sv:");
	scanf("%d",&T2203E[i].sAge);
	printf("Nhap diem sv:");
	scanf("%1f",&T2203E[i].sMark);
		
	}
}
