#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, pow = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while(temp >= 10) {
        temp /= 10;
        pow *= 10;
        digits++;
    }

    first = temp;

    num = num % pow;
    num = num / 10;

    num = last * pow + num * 10 + first;

    printf("Result = %d", num);

    return 0;
}
