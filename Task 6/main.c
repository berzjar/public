/*
Task 6 : Santa’s Sleigh Flight Schedule
    Santa’s magical sleigh takes off from the North Pole at a hours and b minutes.
    The sleigh stays in the air for c minutes delivering presents.
    Write a program that calculates:
    v — the hour when Santa lands
    m — the minute when Santa lands
    Keep in mind that c can be large, meaning Santa might land after midnight, on the next day!
    Example: If Santa takes off at a = 23, b = 55, and the flight lasts c = 14 minutes,
    then Santa will land at:
    v = 0 hours
    m = 9 minutes
    Help Santa keep his schedule on time—Christmas depends on it!
*/

#include <stdio.h>

int main () {
    int a,b,c,v,m,startMinutes,landingMinutes;
    printf("When Santa lifted off ? hours minutes\n"); 
    scanf("%i %i",&a,&b);
    printf("How long Santa will hang in the air ? minutes\n");
    scanf("%i",&c);
    startMinutes = a * 60 + b ;
    landingMinutes = startMinutes + c;
    if((landingMinutes/60)>=24) {
        v = ((landingMinutes/60)-24);

    } else {
        v = (landingMinutes/60);
    }
    m = landingMinutes % 60; 

    printf("Santa will land at : %i hours %i minutes",v,m);
    getchar();
    getchar();
    
    return 0;
}