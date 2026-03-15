#include <stdio.h>

int main() {
    int a[3][3], i, j, sum=0;
    float avg;

    printf("Enter 3x3 matrix:\n");

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            sum+=a[i][j];

    avg=sum/9.0;

    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);

    return 0;
}
