//COLLEGE NAME WITH GRADE IDENTIFIER. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    
    int marks;
    char clg[20];
    printf("Enter college name: ");  //to enter college name
    scanf("%s", &clg);               
    if(strcmp(clg, "JIT") == 0)
    {
        printf("Enter your marks: "); 
        scanf("%d", &marks);
        if(marks <= 30)
            printf("Your grades are F");
        else if(marks > 30 && marks < 40)
            printf("Your grades are D");
        else if (marks >= 40 && marks < 50)
            printf("Your grades are C");
        
        else if(marks >= 50 && marks < 60)
            printf("Your grades are C+");
        
        else if(marks >= 60 && marks < 70)
            printf("Your grades are B");
        
        else if(marks >= 70 && marks < 80)
            printf("Your grades are B+");
        
        else if(marks >= 80 && marks < 90)
            printf("Your grades are A");
        
        else if(marks >= 90 && marks <= 100)
            printf("Your grades are A+");
        else
            printf("invalid marks.");
    }
    else
    printf("Non specified college");
getch();      
return 0;    
      
}