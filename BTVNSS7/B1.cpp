#include <stdio.h>
int  main () {
	int n;
	printf ( " Nhap n: " );
	scanf ( " % d " , & n);
	char str [n] [ 20 ];
	for ( int i = 0 ; i <n; i ++) {
	printf ( " Nhap chuoi: " );
	scanf ( " %s " , str [i]);
	}
	for ( int i = 0 ; i <n- 1 ; i ++) {
		for ( int j = 0 ; j <n-i- 1 ; j ++) {
			if ( strcmp (str[j], str[j + 1])> 0 ) {
				char temp [ 20 ];
				strcpy (temp, str [j]);
				strcpy (str [j], str [j + 1 ]);
				strcpy (str [j + 1 ], temp);
			}
		}
	}
	for ( int i = 0 ; i <n; i ++) {
		printf ( " %s \ n " , str [i]);
	}
}
