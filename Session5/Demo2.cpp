#include <stdio.h>
int main(){
	int S = 4000;
	
	int M;
	printf("Nhap M= ");
	scanf("%d",&M);
	
	int i=0;
	
	while(S<M){
		// Logic khi yes
		int L = S * 8/100;
		S+= L;
		i++;
		
	}
	//no
	printf("S = %d\n", i);
}
