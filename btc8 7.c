#include <stdio.h>

int main(){
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
	int n=3, a;
        for (int i = 0; i < n; i++) {
        a += arr[i][i];
		}

printf("tong duong cheo chinh la %d", a);
	
	
	
	return 0;
}
