/*

Task 3 :  Santa’s Number-Trimming Magic
Santa has a four-digit number written on his list. He wants to create a new two-digit number by
removing the two middle digits from the original number — a little Christmas magic to help shorten 
his naughty-and-nice records!
Your job is to write a program that performs this transformation.
Example: If Santa’s number is 1235, then the new number should be: 15
Help Santa tidy up his list before Christmas Eve!
*/


#include <stdio.h>

int main () {
    int number;
    printf("Whats the number?\n");
    scanf("%i",&number);
    number = (number % 1000) /10;


    printf("Lucky number is %i",number);
    getchar();
    getchar();
    return 0;
}
