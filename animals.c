#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int check(char string[15], int length);

int main() {
    char animals[6][15];
    

    FILE * file = fopen("all_animals.txt", "r");
    if(file == NULL) {
        printf("error - file does not exist");
        return 0;
    }

    for (int i = 0; i < 6; i++) {
        char fileText[15];
        
        fscanf(file, "%s", fileText);
        strcpy(animals[i], fileText);

        if (check(animals[i], strlen(animals[i])) == 0) {
            printf("%s\n", animals[i]);
        }
    }

    for (int j = 0; j < 6; j++) {
        if (check(animals[j], strlen(animals[j])) != 0) {
             printf("%s\n", animals[j]);
        }
    }

    fclose(file);
}

int check(char string[15], int length) {
    int checker = 0;
    for (int i = 0; i < length; i++) {
        if (islower(string[i])) {
            checker++;
            break;
        }
    }
    return checker;
}