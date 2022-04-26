#include <stdio.h>
int tinhTong(int a, int b){
	int c= a+b;
	return c;
}
bool checkEven(int n){
	//if(n%2==0){
	//return true;
	//}
	//return false;
	
	return n%2==0;
	
}
void menu(){
	printf("Vui long chon mon an:\n");
	printf("1.Lau hai san\n");
	printf("2.Lau dieu cua\n");
	return;
}
void nhapMang(int arr[], int n){
	printf("NhapMang:\n");
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}
void xuatMang(int arr[], int n){
	printf("XuatMang:\n");
	for(int i=0;i<n;i++){
		printf("%5d", arr[i]);
	}
}
void  sapxepMang(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= tmp;
			}
		}
	}
}
int main(){
	int a = 10, b = 20;
	
	int z = tinhTong(a,b);
	if(checkEven(b)){
		printf("%d la so chan\n",b);
	}
	menu();	
}

