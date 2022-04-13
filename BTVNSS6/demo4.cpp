#include <stdio.h>
//Cho so nguyên duong n. Hãy tìm chu so dau tiên cua n
int main(){
	int n, temp, max;
	// //su dung vòng lap do..while de yêu cau nguoi dùng nhap vào so nguyên duong n
  //neu n <= 0 thì yêu cau nhap lai
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
