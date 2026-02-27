#include <stdio.h>

int leapCount(int x)
{
    return x/4 - x/100 + x/400;
}

int main()
{
    int Y;
    printf("Enter year: ");
    scanf("%d", &Y);

    int N = Y - 1900;
    int L = leapCount(Y-1) - leapCount(1899);

    int shift = (N + L) % 7;

    char *days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    printf("01/01/%d is %s\n", Y, days[shift]);

    return 0;
}

