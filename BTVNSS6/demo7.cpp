#include <stdio.h>
int main(){
	int a,b;
	do{
	printf("Nhap so nguyen duong a:");
	scanf("%d", &a);
	
	printf("Nhap so nguyen duong b:");
	scanf("%d", &b);

}while(!(b>a && a>0));

for(int i=a;i<=b;i++){
	// kiem tra i co phai snt hay khong
	int c=0;
	for(int j=1; j<=1; j++){
		if(i%j==0){
			c++;
		}
	}
	if(c==2){
		printf("SNT: %d\n",i );
	}
}
}

