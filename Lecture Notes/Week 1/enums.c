#include <stdio.h>

enum weekdays
{
    MON,
    TUE,
    WED,
    THU = 400,
    FRI,
    SAT,
    SUN
};
// assigns numbers to each (0-6)

int main(void)
{
    enum weekdays weekday;
    weekday = WED;
    // weekday has value of 2
}