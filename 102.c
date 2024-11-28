#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    int n;

    printf("Enter the number of students to append: ");
    scanf("%d", &n);

    file = fopen("LNMIITSTUDENT.dat", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Total Marks: ");
        scanf("%f", &student.totalMarks);

        fprintf(file, "Roll Number: %d\n", student.rollNumber);
        fprintf(file, "Name: %s\n", student.name);
        fprintf(file, "Total Marks: %.2f\n", student.totalMarks);
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Student details have been appended to LNMIITSTUDENT.dat\n");

    return 0;
}
