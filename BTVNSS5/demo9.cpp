#include <stdio.h>
// tim tat ca cac so nguyen to nho hon n
int main(){
	int n;
	do{
	printf("Nhap n:");
	scanf("%d", &n);
}while(n<=0);

for(int x = 2;x<n;x++){
int c=0;
for(int i=2;i<=x/2; i++){
	if(x%i==0){
		c++;
		break;
	}
}
if(c==0){
	printf("SNT: %d\n", x);
}
	}
}

