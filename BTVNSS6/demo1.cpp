#include <stdio.h>
int main(){
	//Nhap 1 so n, tìm các uoc va tinh tong uoc cua n
	int n,S;
	//bat dau vong lap do while
	//so sanh dieu kien cua if va while
	
	do{
		printf("Nhap so n:");
		scanf("%d", &n);
	//neu truong hop nay sai => display	
	if(n<=0){
		printf("N phai lon hon 0\n");

}

	}while(n<=0);
	//vong lap for chay tu i den 1
	//dieu kien i nho hon hoac bang so n da nhap
	for( int i=1;i<=n;i++){
		//kiem tra so nhap vao n co chia het cho i hay khong?
		if(n%i==0){
			//in ra cac uoc so
			//tong = tong ket qua+ ket qua truoc la i
			printf("%d\n", i);
			S=S+i;
		}
	}
	printf("Tong uoc so la: %d", S);
}
