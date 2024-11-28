
#include <stdio.h>

struct Employee {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() {
    struct Employee employ[50];
    struct Employee *ptr;
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        ptr = &employ[i];
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &ptr->empNumber);
        printf("Employee Name: ");
        scanf("%s", ptr->empName);
        printf("Basic Pay: ");
        scanf("%f", &ptr->basicPay);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        ptr = &employ[i];
        printf("Employee Number: %d\n", ptr->empNumber);
        printf("Employee Name: %s\n", ptr->empName);
        printf("Basic Pay: %.2f\n", ptr->basicPay);
        printf("\n");
    }

    return 0;
}
