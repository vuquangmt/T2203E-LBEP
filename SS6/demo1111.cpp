 #include <stdio.h>
int main(){
 int ary[10];
    int i, total, high;
    for(i=0; i<10; i++){
    	//duyet mang
	 scanf("%d",&ary[i]);
    }
    /* Displays highest of the entered values */
    high = ary[0];
    for(i=1; i<10; i++)
    {
        if(ary[i] > high)
            high = ary[i];
    }
    printf("\n So lon nhat trong cac so la: %d", high);
}


