#include <stdio.h>
#include <math.h>

int main() {
    float x, n, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &n);

    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Pow\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: result = x + n; break;
        case 2: result = x - n; break;
        case 3: result = x * n; break;
        case 4: result = x / n; break;
        case 5: result = pow(x, n); break;
        default: printf("Invalid choice"); return 0;
    }

    printf("Result = %.2f", result);
    return 0;
}
