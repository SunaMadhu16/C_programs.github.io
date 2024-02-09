#include <stdio.h>
struct Student {
   char name[35];
    int age;
    float totalMarks;
};

int main() {
    // Declare an array of structures to store information for three students
    struct Student stds[3];

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Student Name: ");
        scanf("%s", stds[i].name);

        printf("Student Age: ");
        scanf("%d", &stds[i].age);

        printf("Total Marks: ");
        scanf("%f", &stds[i].totalMarks);

        printf("\n");
    }
printf("*******************************************************");
    // Display information for each student
    printf("All 3 Students Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter The Student %d information:\n", i+1);
        printf("Student Name: %s\n", stds[i].name);
        printf("Student Age: %d\n", stds[i].age);
        printf("Total Marks: %.2f\n", stds[i].totalMarks);
        printf("\n");
    }

    return 0;
}
