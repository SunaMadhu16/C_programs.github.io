#include <stdio.h>

struct Student {
    char name[35];
    int age;
    float totalMarks;
};

int main() {
    struct Student stds[3];
    struct Student *ptr = stds;

    // Modify information for each student using pointers
    for (int i = 0; i < 3; i++) {
        printf("Modify information for Student %d:\n", i + 1);

        printf("Student Name: ");
        scanf("%s", ptr->name);

        printf("Student Age: ");
        scanf("%d", &(ptr->age));

        printf("Total Marks: ");
        scanf("%f", &(ptr->totalMarks));

        ptr++; // Move to the next structure in the array
    }

    // Display modified information for each student using pointers
    printf("Modified Information for All 3 Students:\n");
    ptr = stds;
    for (int i = 0; i < 3; i++) {
        printf("Modified Information for Student %d:\n", i + 1);
        printf("Student Name: %s\n", ptr->name);
        printf("Student Age: %d\n", ptr->age);
        printf("Total Marks: %.2f\n", ptr->totalMarks);
        printf("\n");

        ptr++; // Move to the next structure in the array
    }

    return 0;
}



