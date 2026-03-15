#include <stdio.h>

int main() {
    int a[50], n, i, j, temp, k;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter K value: ");
    scanf("%d",&k);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("%dth Minimum Element = %d",k,a[k-1]);

    return 0;
}
