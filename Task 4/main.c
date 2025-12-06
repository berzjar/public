/*
Task 3 :  Gift Bag
Santa Claus is preparing his gift bag and checking the prices of 
different toys. The toy prices (real numbers) are entered from the 
keyboard. When 0 is entered, it means the magical toy list is finished.
Write a program that:
Calculates the total price of all toys that cost more than 10 EUR 
(because the more expensive toys are usually extra magical!).
Determines and outputs how many such special toys Santa has added 
to his bag.
Example (Santa’s list):
Input:
5.6; 6.7; 12.3; 15.7; 0
Output should be:
Total price of magical toys: 28.0 EUR
Number of magical toys: 2
*/

#include <stdio.h>


int main () {

double totalPrice = 0;    
double price;
int count = 0;  

printf("Enter toy prices( 0 or negative to finish): \n");
    while(1) {  

         if (scanf("%lf", &price) != 1) {
            printf("Invalid input! Please enter a number.\n");

            
            while (getchar() != '\n');
            continue;  
        }
        
        if(price <= 0) {
            break;
        }
        if(price > 10.0) {
            count++;
            totalPrice += price;
        }
        
    }
    printf("Total price: %.2lf\nCount of items: %i",totalPrice,count);
    getchar();
    getchar();
}