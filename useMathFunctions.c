#include <stdio.h>
#include <math.h>

int main(void) {
	
	float num1;
	float num2;
	float num3;
	float num4;

	float power = 3.00;

	printf("enter num 1\n");
	scanf("%f", &num1);
	
	printf("enter num 2\n");
	scanf("%f", &num2);
	
	printf("enter num 3\n");
	scanf("%f", &num3);
	
	printf("enter num 4\n");
	scanf("%f", &num4);

	float num1s[5] = {num1, sqrtf(num1), powf(num1, power), ceilf(num1), floorf(num1)};
	float num2s[5] = {num2, sqrtf(num2), powf(num2, power), ceilf(num2), floorf(num2)};
	float num3s[5] = {num3, sqrtf(num3), powf(num3, power), ceilf(num3), floorf(num3)};
	float num4s[5] = {num4, sqrtf(num4), powf(num4, power), ceilf(num4), floorf(num4)};

	printf("Numbers %*sSquare Root", 6, "");
	printf("%*sCube", 3, "");
	printf("%*sCeiling", 11, "");
	printf("%*sFloor\n", 7, "");

	for(int i = 0; i < 5; i++) {
		printf("%.2f", num1s[i]);
		printf("%*s", 10, "");
	}
	printf("\n");

	for(int i = 0; i < 5; i++) {
		printf("%.2f", num2s[i]);
		printf("%*s", 10, "");
	}
	printf("\n");

	for(int i = 0; i < 5; i++) {
		printf("%.2f", num3s[i]);
		if(i==2) {
			printf("%*s", 9, "");
		}
		else {
			printf("%*s", 10, "");
		}	
	}
	printf("\n");

	for(int i = 0; i < 5; i++) {
		printf("%.2f", num4s[i]);
		if(i==1) {
			printf("%*s", 10, "");
		}
		else if (i==2) {
			printf("%*s", 8, "");
		}
		else {
			printf("%*s", 9, "");
		}	
	}
	printf("\n");
}