#include <stdio.h>
//Cho so nguy�n duong n. H�y t�m chu so dau ti�n cua n
int main(){
	int n, temp, max;
	// //su dung v�ng lap do..while de y�u cau nguoi d�ng nhap v�o so nguy�n duong n
  //neu n <= 0 th� y�u cau nhap lai
	do{
		printf("Nhap so n:");
		scanf("%d", &n);
	if(n<=0){
		printf("\n n phai lon hon 0");
	}	
}while(n <= 0);
  temp = n;
  do
  {
     max = temp % 10;
  }while(temp /= 10);
  printf("\n Chu so dau tien cua %d la: %d",n, max);
}
