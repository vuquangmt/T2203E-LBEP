//nhap so duong n, tinh tong cac chu so cua n
//input: 1234
//output: 10
#include<stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d", &n);
	
	int s=0;
while(n>0){
	s+= n%10;
	n/=10;
}
printf("Tong cac chu so cua n: %d", s);

}
