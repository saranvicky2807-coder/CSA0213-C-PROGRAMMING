#include <stdio.h>

int main() {
    int a[50], n, i, min, sec;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    min=sec=9999;

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            sec=min;
            min=a[i];
        }
        else if(a[i]<sec && a[i]!=min)
            sec=a[i];
    }

    printf("Second Minimum = %d",sec);

    return 0;
}
