#include <stdio.h>
//Cho so nguyen duong n. hay tim chu so dau tien cua n
int main(){
	int n, temp, max;
	// //su dung vong lap do..while de yeu cau nguoi dung nhap vao so nguyen duong n
  //neu n <= 0 thi yeu cau nhap lai
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
