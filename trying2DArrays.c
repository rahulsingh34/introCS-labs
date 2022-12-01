#include <stdio.h>

int main(void) {
    int theArray[5][2];

    for(int i = 0; i<5; i++) {
        for(int j = 0; j<2; j++) {
            printf("Enter a number for row %d and col %d: ", i+1, j+1);
            scanf("%d", &theArray[i][j]);
        }
    }

    for(int i = 0; i<5; i++) {
        for(int j = 0; j<2; j++) {
            printf("%d ", theArray[i][j]);
        }
        printf("\n");
    }
}