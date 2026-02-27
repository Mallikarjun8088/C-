#include <stdio.h>

int main() {
    int i, base, exponent, result ;


    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i = 1; i <= exponent; i++) {
        result = result * base;
    }
	
printf("\n%d\n", result);
}
