#include <stdio.h>
int main(void)
{
    const char* s = "Hello";
    int integerNum = 42;
    printf("\n-----------\n");
    printf("Padding Variable Substitution:\n"); 
    printf("[%d]\n", integerNum);
    printf("[%9d]\n", integerNum);
    printf("[\t%d]\n", integerNum);
    printf("[%-6d %d]\n", integerNum, integerNum);
    printf("[%d\t%d]\n", integerNum, integerNum);
    printf("\n-----------\n");
    
    printf("Padding For +\\- :\n");
    printf("%d\n", -1*integerNum);
    printf("% d\n",-1* integerNum);
    printf("% d\n", integerNum);
    printf("%+d\n", integerNum);
    printf("\n-----------\n");

    //USE   
    printf("Strings:\n"); 
    printf(" padding:\n");
    printf("\t[%10s]\n", s);
    printf("\t[%-10s]\n", s);
    printf("\t[%*s]\n", 10, s);
    printf(" truncating:\n");
    printf("\t%.4s\n", s);
    printf("\t%.*s\n", 3, s);
    printf("\n-----------\n");
 
    printf("Characters:\t%c %%\n", 'A');
    printf("Characters:\t\"%c\"\n", 'A');
    printf("\n-----------\n");
 
    printf("Integers:\n");
    printf("\tDecimal:\t%i %d %.6i %i %.0i %+i %i\n",
                         1, 2,   3, 0,   0,  4,-4);
    printf("\tHexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
    printf("\tOctal:\t\t%o %#o %#o\n", 10, 10, 4);
    printf("\n-----------\n");
    
 
    printf("Floating point:\n");
    printf("\tRounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
    printf("\tPadding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    printf("\tScientific:\t%E %e\n", 1.5, 1.5);
    printf("\tHexadecimal:\t%a %A\n", 1.5, 1.5);
    printf("\tSpecial values:\t0/0=%g 1/0=%g\n", 0.0/0.0, 1.0/0.0);
    printf("\n-----------\n");
    
    return 0;
}

