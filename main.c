#include <stdio.h>
#include <stdbool.h> // used for boolean

// variables and data types in C

/* integers */
int age = 25;
int year = 2026;
/* float number*/
float gpa = 2.5;
/* double */
double pi = 3.14159265358979323846;
/* Characters */
char grade = 'A';
/* String = Array of characters */
char name[] = "Cybevion";
/* Booleans */
bool  isOnline = true;

// Format Specifiers = Special tokens that begin with a % symbol, followed by a character that specifies the data type
//                     and optional modifiers (width, precision, flags). They control how data is displayed or interpreted
//                     %d = decimal
//                     %f = float
//                     %lf = long float (double)
//                     %c = character
//                     %s = string

// width example variables

int num1 = 1;
int num2 = 10;
int num3 = 100;
int num4 = 1000;
int num5 = -10;

// precision example variables

float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

// arithmetic operators = + - * / % ++ --

int a = 2;
int b = 3;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;


int main() {
    printf("Hello, World!\n");
    printf("Day 1 of 10 days 10 Languages challenges.\n");
    printf("Your age %d years old\n", age);
    printf("The year is %d\n", year);
    printf("Your GPA is %.2f\n", gpa);
    printf("The value of  pi is %lf\n", pi);
    printf("Your grade is %c\n", grade);
    printf("Hello %s\n", name);
    if (isOnline)
    {
        /* code */
        printf("You are Online\n");
    }
    else{
        printf("Your are Offline\n");
    }
    // This is comment is C programming language
    /* this is also comment*/


    // example of width
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    printf("%3d\n", num4);
    // width adds whitespaces if the data does match the size
    // you can also left justify by adding - sign before the width
    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);
    // you can also add any character before the width size to fill the whitespaces 
    printf("%03d\n", num1);
    // also you can add positive and negative values in the width
    printf("%+d\n", num4);
    printf("%+d\n", num5);

    // examples of precision
    printf("%.1f\n", price1);
    printf("%.2f\n", price2);
    printf("%.1f\n", price3);
    // precision is used to set the number of digit that will appear after decimal point
    // precision also roundup, the value based on the precision value

    // arithmetic operators 
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    // argumented assignment operators
    // a+=2;
    // a-=2;
    // a*=2;
    // a/=2;
    // a++;
    // a--;


    return 0;
}