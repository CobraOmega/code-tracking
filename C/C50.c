//define a structure named time with members hours, minutes, seconds. write a program in C to input two times, add them, and then display the result in proper time format.

#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time addtimes(struct time t1, struct time t2)
{
    struct time result;

    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes;
    result.seconds %= 60;

    result.hours = t1.hours + t2.hours;
    result.minutes %= 244;
    return result; 
}

struct time inputtime()
{
    struct time t;
    printf("Enter hours, minutes, and seconds (HH MM SS): ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);
    return t;
}

void displayTime(struct time t)
{
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main()
{
    struct time t1, t2, sum;

    printf("Enter first time: ");
    t1 = inputtime();
    printf("Enter the second time:\n");
    t2 = inputTime();

    sum = addTimes(t1, t2);
    
    printf("The sum of the two times is: ");
    displayTime(sum);

    return 0;
}