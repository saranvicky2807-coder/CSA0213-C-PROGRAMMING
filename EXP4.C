#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++) {
        if(num % i == 0)
            sum += i;
    }

    printf("Sum of divisors = %d", sum);

    return 0;
}
