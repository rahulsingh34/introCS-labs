#include <stdio.h>

float calculateTax (float amount) {
    amount = amount*1.13;
    return(amount);
}

void getNumbers() {
    float number = 0.00;
    float numberTax = 0.00;

    while(number >= 0.00) {
        printf("Enter a dollar amount $: ");
        scanf("%f", &number);
        numberTax = calculateTax(number);
        if(number >= 0.00) {
            printf("You entered $%.2f and the amount with tax is: $%.2f\n", number, numberTax);
        }
    }

    printf("Thank you! Bye!\n");
}

int main(int argc, char * argv[]) {
    getNumbers();
    return(0);
}