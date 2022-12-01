#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(char string[15]);

int main() {

    int upperINT = 1;
    int lowerINT = 4;

    struct animal {
        char name[50];
        int animal_id;
        int isUpperCase;
    };

    struct animal allAnimals[6];

    FILE * file = fopen("animals.txt", "r");
    if(file == NULL) {
        printf("error - file does not exist");
        return 0;
    }

    for (int i = 0; i < 6; i++) {
        fscanf(file, "%s", allAnimals[i].name);
        if (check(allAnimals[i].name) == 0) {
            allAnimals[i].animal_id = upperINT;
            allAnimals[i].isUpperCase = 1;
            upperINT++;
        }
        else {
            allAnimals[i].animal_id = lowerINT;
            allAnimals[i].isUpperCase = 0;
            lowerINT++;
        }
    }

    for (int i = 0; i < 6; i++) {
        if(allAnimals[i].isUpperCase == 1) {
            printf("ID: %d\n", allAnimals[i].animal_id);
            printf("Name: %s\n", allAnimals[i].name);
            printf("This animal is written in all capitals\n");
        }  
    }

    for (int i = 0; i < 6; i++) {
        if(allAnimals[i].isUpperCase == 0) {
            printf("ID: %d\n", allAnimals[i].animal_id);
            printf("Name: %s\n", allAnimals[i].name);
            printf("This animal is written in all lowercase\n");
        }
    }
}

int check(char string[15]) {
    int checker = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (islower(string[i])) {
            checker++;
            break;
        }
    }
    return checker;
}