#include <stdio.h>

int main() {

    double input = 0.00;
    scanf("%lf", &input);

    printf("A=%.4f\n", 3.14159*(input*input));
    return 0;
}