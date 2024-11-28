#include <stdio.h>

int main() {
    int a, i, j;
    printf("nhap so bat ky: ");
    scanf("%d", &a);
    int ar[a][a];
    for (i = 0; i < a; i++) 
    for (j = 0; j < a; j++) {
            printf("So hang la [%d][%d]: ", i, j);
            scanf("%d", &ar[i][j]);
        }
    for (i = 0; i < a; i++) {
    for (j = 0; j < a; j++) 
            printf("%d ", ar[i][j]);
        printf("\n");
    }

    return 0;
}
