/**
[A] (a + b) / (c + d)
[B] √(a b) / ( c + d )
[C] ( ( a + b ) / c ) / ( a-( b / d ) )
[D] ((a-b) /(c*c*d) )
**/
#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c, d;
    printf("Enter four numbers a, b, c, d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    float A = (float)(a + b) / (c + d);
    float B = sqrt((float)(a * b)) / (c + d);
    float C = ((float)(a + b) / c) / (a - ((float) b / d));
    float D = (float)(a - b) / (c * c * d);
    printf("(a + b) / (c + d) = %.2f\n", A);
    printf("sqrt(a * b) / (c + d) = %.2f\n", B);
    printf("((a + b) / c) / (a - (b / d)) = %.2f\n", C);
    printf("((a - b) / (c * c * d)) = %.2f\n", D);
}
