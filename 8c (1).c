#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    char designation[100];
    float basic_salary;
    float hra;
    float da;
    float gross_salary;
};

void calculateGrossSalary(struct Employee *emp) {
    emp->gross_salary = emp->basic_salary + emp->hra + emp->da;
}

int main() {
    struct Employee employees[5];  
    int i, highest_salary_index = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        
        getchar(); 
        
        printf("Enter Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';  
        
        printf("Enter Designation: ");
        fgets(employees[i].designation, sizeof(employees[i].designation), stdin);
        employees[i].designation[strcspn(employees[i].designation, "\n")] = '\0'; // Remove newline character

        printf("Enter Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);

        printf("Enter HRA: ");
        scanf("%f", &employees[i].hra);

        printf("Enter DA: ");
        scanf("%f", &employees[i].da);

        calculateGrossSalary(&employees[i]);

        printf("\n"); 
    }

    for (i = 1; i < 5; i++) {
        if (employees[i].gross_salary > employees[highest_salary_index].gross_salary) {
            highest_salary_index = i;
        }
    }

    printf("Employee with the highest gross salary:\n");
    printf("ID: %d\n", employees[highest_salary_index].id);
    printf("Name: %s\n", employees[highest_salary_index].name);
    printf("Designation: %s\n", employees[highest_salary_index].designation);
    printf("Basic Salary: %.2f\n", employees[highest_salary_index].basic_salary);
    printf("HRA: %.2f\n", employees[highest_salary_index].hra);
    printf("DA: %.2f\n", employees[highest_salary_index].da);
    printf("Gross Salary: %.2f\n", employees[highest_salary_index].gross_salary);

    return 0;
}


