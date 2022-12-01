#include <stdio.h>
#include <string.h>

int main(void) {
    char uName[25];
    char name[5] = "Rahul";
    char cName[25];
    int count = 0;

    printf("Enter your name! ");
    scanf("%s", uName);

    if(strcmp(name, uName) == 0) {
        printf("Welcome %s, we have the same name!\n", uName);
    }
    else {
        printf("Welcome to my program %s!\n", uName);
    }

    strcpy(cName, uName);
    
    for (int i = 0; i < strlen(cName); i++) {
        if (cName[i] == 'a' || cName[i] == 'e' || cName[i] == 'i' || cName[i] == 'o' || cName[i] == 'u' || 
            cName[i] == 'A' || cName[i] == 'E' || cName[i] == 'I' || cName[i] == 'O' || cName[i] == 'U') 
        {
            cName[i] = '#';
            count++;
        }
    }

    printf("You input %s, after replacing %d vowels with #’s it is now %s\n", uName, count, cName);
}