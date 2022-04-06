#include <stdio.h>
int main(){
	int n;
		printf("Nhap n:");
		scanf("%d", &n);

//Khai bao S, i
	float S=0;
	int i=1;
//loop S ham float
	while(i<=n){
		S+= (float)1/i;
		i ++;
}
	printf("S=%f\n", S);

}
