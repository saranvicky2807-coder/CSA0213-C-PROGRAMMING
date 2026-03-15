#include <stdio.h>

int main() {
    int a[3][3], i, j, row, col;

    printf("Enter 3x3 matrix:\n");

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
    {
        row=0;
        for(j=0;j<3;j++)
            row+=a[i][j];
        printf("Sum of Row %d = %d\n",i+1,row);
    }

    for(j=0;j<3;j++)
    {
        col=0;
        for(i=0;i<3;i++)
            col+=a[i][j];
        printf("Sum of Column %d = %d\n",j+1,col);
    }

    return 0;
}
