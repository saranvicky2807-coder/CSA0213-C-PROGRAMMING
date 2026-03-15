#include <stdio.h>

int main() {
    int a[50], n, i, j, count=0, factors;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        factors=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                factors++;
        }

        if(factors>2)
            count++;
    }

    printf("Number of Composite Numbers = %d",count);

    return 0;
}
