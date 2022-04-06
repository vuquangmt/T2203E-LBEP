#include <stdio.h>
int main(){
	int n;
		printf("Nhap so n:");
		scanf("%d",&n);
	int S=0;
	int i=0;
	
	while(i<=n){
		S+=i;
		i++;
	}
	printf("S=%d",S);
	
}
