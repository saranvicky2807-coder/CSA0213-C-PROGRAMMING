#include <stdio.h>

int main() {
    int a[50], n, d, i;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter rotation count: ");
    scanf("%d",&d);

    for(i=d;i<n;i++)
        printf("%d ",a[i]);

    for(i=0;i<d;i++)
        printf("%d ",a[i]);

    return 0;
}
