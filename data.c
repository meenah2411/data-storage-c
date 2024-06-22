#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int rollNumber;
    int marks;
};

int main() {

    struct Student student1;


    strcpy(student1.name, "Queen Meenah");
    student1.rollNumber = 12345;
    student1.marks = 22;


    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %d\n", student1.marks);

    return 0;
}