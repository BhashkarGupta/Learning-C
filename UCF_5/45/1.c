// Write a program to calculate the temperence between two time periods. 
#include<stdio.h>

struct time
{
    int hours;
    int mins;
    int secs;
};

struct time TimeDifference(struct time t1, struct time t2){
    struct time temp;
    if (t1.hours > t2.hours || 
   (t1.hours == t2.hours && t1.mins > t2.mins) || 
   (t1.hours == t2.hours && t1.mins == t2.mins && t1.secs > t2.secs))
    {
        temp = t1;
        t1 = t2;
        t2 = temp;
    }
    temp = (struct time){0, 0, 0};
    temp.secs = t2.secs - t1.secs;
    if (temp.secs < 0)
    {
        temp.mins -= 1;
        temp.secs += 60;
    }
    temp.mins += t2.mins - t1.mins;
    if (temp.mins < 0)
    {
        temp.hours -= 1;
        temp.mins += 60;
    }
    temp.hours += t2.hours - t1.hours;
    return temp;
}

int main() {
    struct time t1 = {2, 45, 30};
    struct time t2 = {4, 20, 50};

    struct time temp = TimeDifference(t1, t2);

    printf("Time Difference: %d:%d:%d\n", temp.hours, temp.mins, temp.secs);

    return 0;
}