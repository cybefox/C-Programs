#include <stdio.h>

int main() {
    int age;
    float gpa;
    char grade;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your age is %d years old\n", age);
    printf("Your GPA is %.2f\n", gpa);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);


    return 0;
}