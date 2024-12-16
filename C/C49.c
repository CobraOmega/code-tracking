//Create a structure "Student" with members name, age and total marks.WAP to input data for two students, display their onformation and find average total marks.
#include<stdio.h>

struct student
{
    char name[50];
    int age;
    float tmarks;
};

void inputstudentdata(struct student *s)
{
    printf("Enter your name: ");
    scanf("%s", &s->name);

    printf("Enter your age: ");
    scanf("%d", &s->age);

    printf("Enter Total Marks: ");
    scanf("%f", &s->tmarks);
}

void showstudentdata(struct student *s)
{
    printf("Your name is %s", s->name);
    printf("\nYour age is %d", s->age);
    printf("\nYour total marks are %2f",s->tmarks);
}


int main()
{
    struct student student1, student2;

    printf("Enter details for Student 1:\n");
    inputstudentdata(&student1);

    printf("\nEnter details for Student 2:\n");
    inputstudentdata(&student2);

    // Display data for both students
    printf("\nStudent 1 Information:\n");
    showstudentdata(&student1);

    printf("\n\nStudent 2 Information:\n");
    showstudentdata(&student2);

    float avgmarks = (student1.tmarks + student2.tmarks) / 2;
    printf("\nAverage Total marks are :%2f",avgmarks);
}