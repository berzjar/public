/*
Task 7 : Santa’s Christmas Concert Seating Plan
    Santa is organizing a big Christmas concert, and the architect has designed a hall
    with n rows of seats.
    In the first row, there will be k seats.
    Every next row will have 2 more seats than the row before it 
    (because more elves want a good view!).
    Write a program that calculates s, the total number of seats Santa must order 
    to match the architect’s seating plan.
    Example: If n = 3 rows and the first row has k = 8 seats, then the total number of seats 
    should be: s = 30 seats
    Help Santa make sure every elf gets a spot at the show!
*/

#include <stdio.h>

int main () {
        int seats = 0;
        int rows = 0;
        int increment = 0;
        
        printf("How much of rows architect has designed?");
        scanf("%i",&rows);
        if (rows<=0) {
            printf("Wrong rows number\n");
            return 1;
        }    
        for (int i=1;i<=rows;i++){
            seats = seats + increment +8;
            increment += 2;
        } 

    printf("%i rows, %i seats",rows,seats);
    getchar();
    getchar();
    return 0;

}
