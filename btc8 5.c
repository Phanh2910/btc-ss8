#include <stdio.h>

int main() {
    int ar[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, a = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == 0 || i == 2 || j == 0 || j == 2){
                a += ar[i][j];
           }
        }
   }
    printf("Tong phan tu la %d", a);
    return 0;
}
