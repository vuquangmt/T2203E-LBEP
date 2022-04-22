//1.S=x^y
int powVar(int x, int y){
	int s=x;
	for (int i=1;i<y;i++){
		s*=x;
	}
	return s;
}
//2.so nguyen to nho nhat lon hon mo gia tri trong mang
 //check so nguyen to
 bool checkPrime(int n){
 	bool f=true;
 	if (n<2) f=false;
 	for (int i=2; i<=n/2;i++){
 		if (n%i==0){
 			f=false;
 			break;
		}
	}
	 return f;
 }
 //check max cua mang
 int maxArray(int arr[], int n){
 	int max=arr[0];
 	for (int i=1;i<n;i++){
 		if (max<arr[i]) max=arr[i];
	 }
	 return max;
 }
 //tim so nguyen to nho nhat lon hon gia tri trong mang
 int minPrime(int arr[], int n){
 	for (int i=maxArray(arr,n); ;i++){
 		if (checkPrime(i)) return i;
	 }
 }
