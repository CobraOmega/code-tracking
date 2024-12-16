#include
#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE];
void push();
void pop();
void show();

int main()
{
    int choice;
    int i;

    while (1)
    {
	cout<<"\nPerform operations on the stack:"<<endl;
	cout<<"\n1.Push the element\n2.Pop the element\n3.Show\n4.End"<<endl;
	cout<<"\n\nEnter the choice: 1 TO 4 "<<endl;
	cin>>choice;

	switch (choice)
	{
	case 1:
	    push();
	    break;
	case 2:
	    pop();
	    break;
	case 3:
	    show();
	    break;
	case 4:
	    exit(0);

	default:
	    cout<<"\nInvalid choice!!"<<endl;
	}
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
	cout<<"\nOverflow!!"<<endl;
    }
    else
    {
	cout<<"\nEnter the element to be added onto the stack: "<<endl;
	cin>>x;
	top = top + 1;
	inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
	cout<<"\nUnderflow!!"<<endl;
    }
    else
    {
	cout<<inp_array[top]<<endl;
	top = top - 1;
    }
}

void show()
{
int i;
    if (top == -1)
    {
	cout<<"\nUnderflow!!"<<endl;
    }
    else
    {
	cout<<"\nElements present in the stack: \n"<<endl;
	for ( i = top; i >= 0; --i)
	    cout<<inp_array[i]<<endl;
    }
}