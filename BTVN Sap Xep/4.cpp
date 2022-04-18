#include <stdio.h>
int main (){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	char arrs[n][50];
	printf("nhap mang chuoi:\n");
	for(int i=0; i<n; i++){
		scanf("%s", arrs[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(trcmp(arrs[j],arrs[j+1]))>0{
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j].arrs[j+1]);
				strcpy(arrs[j+1],tmp);
				 
			}
		}
	}
	printf("Sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%s",n);
	}
}
