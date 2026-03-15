#include <stdio.h>

int main() {
    int total, staff, nonTeaching, students;

    printf("Total Users: ");
    scanf("%d",&total);

    printf("Staff Users: ");
    scanf("%d",&staff);

    nonTeaching = staff / 3;

    students = total - (staff + nonTeaching);

    printf("Student Users: %d", students);

    return 0;
}
