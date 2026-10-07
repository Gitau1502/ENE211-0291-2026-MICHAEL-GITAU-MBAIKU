#include <stdio.h>

int main() {
    int n;
    char reg_no[30], name[50], grade;
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter Registration No: ");
        scanf("%29s", reg_no);

        printf("Enter Full Name: ");
        scanf(" %[^\n]", name); // Reads full name including spaces

        printf("Enter Marks: ");
        scanf("%f", &marks);

        // Grade calculation using if-else if-else
        if (marks >= 70) grade = 'A';
        else if (marks >= 60) grade = 'B';
        else if (marks >= 50) grade = 'C';
        else if (marks >= 40) grade = 'D';
        else grade = 'F';

        // Display results
        printf("\n-------------------------------\n");
        printf("      STUDENT INFORMATION      \n");
        printf("-------------------------------\n");
        printf("Registration No: %s\nName: %s\nMarks: %.1f\nGrade: %c\nStatus: %s\n",
               reg_no, name, marks, grade, (marks >= 40) ? "Passed" : "Failed");
        printf("-------------------------------\n");
    }
    return 0;
}
