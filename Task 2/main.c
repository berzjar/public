/*
Task 2 :  Santa’s Midnight Clock Countdown

Santa’s magical workshop clock shows x hours and y minutes. Write a program that calculates:

m — how many minutes have passed since midnight
s — how many seconds have passed since midnight
Example: If the clock shows x = 3 and y = 5, then:

Minutes passed: m = 185
Seconds passed: s = 11100
Help Santa keep track of time before the Christmas rush begins!
*/

#include <stdio.h>

int main () {

    unsigned int minutes, hours, minutes_after_midnight, seconds_after_midnight;

  do   
    {
        printf("What shows hour arrow ? 0-23\n");
        if(scanf("%u", &hours) != 1 ) {
            // Clear invalid input from buffer 
            while(getchar() != '\n');
            printf("Invalid input.Please enter a number.\n");
            continue;
        }
        if (hours > 23 ) {
            printf("Invalid hours. Please enter value between 0 and 23.\n");
        }
    }
    while (hours > 23 );

    do
    {
        printf("what shows minutes arrow? 0-59\n");
        if(scanf("%u",&minutes)!=1) {
            //Clear invalid input from buffer
            while(getchar()!='\n');
            printf("invalid input.Please enter a number.\n");
            continue;
        }
        if (minutes > 59) {
            printf("Invalid minutes. Please enter value between 0 and 59.\n");
        }
    } while (minutes > 59);

minutes_after_midnight = (hours * 60) + minutes; // Calculation minutes_after_midnight
seconds_after_midnight = minutes_after_midnight *60;  // Calculation seconds_after_midnight 

printf("Minutes after midnight: %u\n", minutes_after_midnight); 
printf("Seconds after midnight: %u\n", seconds_after_midnight);

getchar(); //Waiting for input to freeze output of CMD 
getchar();
return 0;
    
}

     