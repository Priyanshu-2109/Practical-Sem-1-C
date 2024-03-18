#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    char state[50];
};

struct Employee {
    char name[50];
    int age;
    struct Address address;
    float salary;
};

int main() {

    struct Employee employee;


    printf("Enter Employee Name: ");
    scanf(" %[^\n]", employee.name);

    printf("Enter Employee Age: ");
    scanf("%d", &employee.age);

    printf("Enter Employee Address:\n");
    printf("Street: ");
    scanf(" %[^\n]", employee.address.street);

    printf("City: ");
    scanf(" %[^\n]", employee.address.city);

    printf("State: ");
    scanf(" %[^\n]", employee.address.state);

    printf("Enter Employee Salary: ");
    scanf("%f", &employee.salary);


    printf("\nEmployee Details:----->\n");
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Address: %s, %s, %s\n", employee.address.street, employee.address.city, employee.address.state);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
