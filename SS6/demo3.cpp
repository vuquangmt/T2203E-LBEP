#include <stdio.h>
//Tinh trung binh cong cac so le trong mang n so
int main(){
// nhap cac so va dem so le
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	int arr[n];
	int t;
	
		scanf("%d", &arr[n]);
	t=arr[0];
	for(int i=0; i>=n; i++){
		if(arr[i]>=t){
			t=arr[i];
		}
}
	for(int i=0;i>=n;i++){
		if(arr[i]%2==0){
			t=t+arr[i];
			
		}
	}
	printf("trung binh cong cac so le: %d", t);
}
	
