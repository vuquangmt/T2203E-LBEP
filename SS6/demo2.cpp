 #include <stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
 	int arr[n];
 	int i,max;
    for(i=0; i<n; i++){
    	//duyet mang
    	printf("Nhap so:");
	 scanf("%d",&arr[i]);
    }
     max
	  = arr[0];
    for(int i=0;i<n;i++){
    	if(arr[i]>=max){
    		max= arr[i];
		}
	}
	printf("max: %d\n", max);
	//tim so gan lon nhat: 1 4 1 0 8 5 => max:8, gan max: 5
	int max2= max;
	for(int i=0;i<n;i++){
		if(arr[i]<max){
			max2 = arr[i];
			break;
		}
	}
	if(max2==max){
		printf("khong co so gan lon nhat \n");
	}else{
		for(int i=0; i<n; i++){
			if(arr[i]>max2 && arr[i]<max){
				max2=arr[i];
			}
		}
		printf("so gan lon nhat: %d\n", max2);
	}
}
