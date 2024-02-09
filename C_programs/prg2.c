#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    // Declare an array of structures to store information for three students
    struct Student students[3];

    // Use pointers to write information for each student
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for Student %d:\n", i + 1);

        // Use pointers to write data to structure members
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);

        printf("\n");
    }

    // Use pointers to read and display information for each student
    printf("Student Information:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d:\n", i + 1);

        // Use pointers to read and display data from structure members
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Total Marks: %.2f\n", students[i].totalMarks);
        printf("\n");
    }

    return 0;
}
