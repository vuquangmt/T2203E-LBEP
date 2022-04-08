#include <stdio.h>
int main(){
	int n;
		printf("Nhap n:");
		scanf("%d", &n);
	//input i=1
	int i=1;
	//xet lenh while, dk i<n, i+=2
	while(i<n){
		printf("%d\n", i);
		i+=2;
	}
}
