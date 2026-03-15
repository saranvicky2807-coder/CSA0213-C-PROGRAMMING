#include <stdio.h>

int main() {
    float p, years, interest, rate;
    char senior;

    printf("Enter principal amount: ");
    scanf("%f",&p);

    printf("Enter number of years: ");
    scanf("%f",&years);

    printf("Is customer senior citizen (y/n): ");
    scanf(" %c",&senior);

    if(senior == 'y' || senior == 'Y')
        rate = 12;
    else
        rate = 10;

    interest = (p * years * rate) / 100;

    printf("Interest: %.2f", interest);

    return 0;
}
