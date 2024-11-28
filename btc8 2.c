#include <stdio.h>

int main(){
	int a,i, random, ar[5]= {1,2,3,4,5};
	printf("moi ban nhap 1 so bat ki: ");
	scanf("%d", &random);
	for(i = 0; i < sizeof(ar)/sizeof(int); i++){
	if (random != ar[i]){
		printf("so ban chon khong nam trong tap hop cua toi !!!");
	}else{
		printf("so ban chon nam trong tap hop cua toi va no o vi tri thu %d !!!", i + 1);
		break;
	}
}
	return 0;
}
