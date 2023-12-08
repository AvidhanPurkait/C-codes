#include <stdio.h>
struct time_struct
{
    int hour, minute, second;
};
int main()
{
    struct time_struct t1, t2, t3;
    int seconds1, seconds2, difference;
    printf("Enter first time in HH:MM:SS : ");
    scanf("%d:%d:%d",&t1.hour, &t1.minute, &t1.second);
    printf("Enter second time in HH:MM:SS: ");
    scanf("%d:%d:%d",&t2.hour, &t2.minute, &t2.second);
    seconds1 = t1.hour*60*60 + t1.minute*60 + t1.second;
    seconds2 = t2.hour*60*60 + t2.minute*60 + t2.second;
    if(seconds1>seconds2)
        difference = (seconds1-seconds2);
    else
        difference = (seconds2-seconds1);
    t3.minute = difference/60;
    t3.hour = t3.minute/60;
    t3.minute = t3.minute%60;
    t3.second = difference%60;
    printf("Time difference is: %2d:%d:%2d\n", t3.hour, t3.minute, t3.second);
    return 0;
}
