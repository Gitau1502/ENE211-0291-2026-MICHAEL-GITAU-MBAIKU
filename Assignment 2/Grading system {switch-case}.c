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

        // Grade calculation using switch-case (integer division by 10)
        switch ((int)marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:  grade = 'A'; break;
            case 6:  grade = 'B'; break;
            case 5:  grade = 'C'; break;
            case 4:  grade = 'D'; break;
            default: grade = 'F'; break;
        }

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
