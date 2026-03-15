#include <stdio.h>

int main() {
    int p, q, r, i;

    printf("Enter P Q R: ");
    scanf("%d %d %d", &p, &q, &r);

    printf("Numbers are = ");

    for(i=p;i<=q;i++) {
        if(i == r)
            continue;
        printf("%d ", i);
    }

    return 0;
}
