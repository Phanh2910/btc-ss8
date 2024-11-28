#include <stdio.h>

int main(){
	int a, ar[5]= {1,2,3,4,5};
    for ( a =sizeof(ar)/sizeof(int)  -1; a >= 0; a--){
		printf("%d",ar[a]);
}
	
	
	return 0;
}
