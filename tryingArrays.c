#include <stdio.h>
#include <string.h>

int main(void) {
    float array[] = {2.25, 3.55, 6.50, 7.31, 9.78, 10.11};
    
    for(int i = 0; i<6; i++) {
        printf("     %.2f", array[i]);
    }
    printf("\n");


    //assignment 2 prep
    char* s = "String";

    int x = strlen(s);

    printf("%d", x);
}