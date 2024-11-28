#include <stdio.h>
int main(){
	int a,i,j;
	printf("moi ban nhap 1 so bat ky: ");
	scanf("%d",&a);
	int ar[a][a];
	for (i = 0; i<a; i ++){
		for (j = 0; j< a; j ++){
			printf("moi nhap phan tu cua ban [%d][%d]: ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
 	int max = ar[0][0];
	for(i=0;i<a;i++){
	for(j=0;j<a;j++){
			if (ar[i][j] > max){
				max = ar[i][j];
			}
		}
	}
	printf("so lon nhat la so %d",max);
	
	return 0;
}
