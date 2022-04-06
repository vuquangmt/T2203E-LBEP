#include <stdio.h>
int main(){
	int n;
		printf("n=");
		scanf("%d", &n);
// input i, c;
	int i=2;
	int c=0	;
	
	while (i<=n/2){
		if(n%i==0){
			c++;
			break;
		}
			i++;
		}
	if(c==0){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai so nguyen to",n);
}

}


		
		
	
		
	
		
		
