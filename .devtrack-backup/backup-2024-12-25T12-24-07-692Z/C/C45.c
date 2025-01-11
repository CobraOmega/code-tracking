/*
collection of reference variable from hetrogeneous datatype is called structure
struct is a keyword 
*/
//WAP to create a srtucture using . (dot) operator
#include<stdio.h>

int main()
{
    struct jit
    {
        int phone;
        float fees;
        char name[20];
    };
    struct jit j1;

    printf("\nEnter your name: ");
    scanf("%s",&j1.name);
    printf("\nEnter your fees: ");
    scanf("%f",&j1.fees);
    printf("\nEnter your phone number: ");
    scanf("%d",&j1.phone);
    
    printf("Name is %s",j1.name);
    printf("fees is %f",j1.fees);
    printf("Phone number is %d",j1.phone);
}