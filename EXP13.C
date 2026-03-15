#include <stdio.h>

int main() {
    int m,n,i;

    printf("Enter M and N: ");
    scanf("%d %d",&m,&n);

    printf("Odd Numbers = ");
    for(i=m;i<=n;i++)
        if(i%2!=0)
            printf("%d ",i);

    printf("\nEven Numbers = ");
    for(i=m;i<=n;i++)
        if(i%2==0)
            printf("%d ",i);

    return 0;
}
