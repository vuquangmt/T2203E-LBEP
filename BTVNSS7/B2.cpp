#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	char str[n][50];
	for (int i=0; i<n;i++){
		printf("Nhap so chuoi %d: ",i);
		scanf("%s",str[i]);
	} 
	char srcStr[50];
	printf("Nhap tim chuoi : ");
	scanf("%s",srcStr);
	bool f=true;
	for (int i=0; i<n;i++){
		if(strcmp(srcStr,str[i])==0){
			f=false;
			break;
		}
	}
	if (f) printf("chuoi %s khong co trong danh sach",srcStr);
	else printf("chuoi %s co o trong danh sach",srcStr);
			
}

