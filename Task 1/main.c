/*
Task 1 :  Santa’s Tiling Trouble

Santa is renovating one of the rooms in his workshop! You are given the dimensions of the room — its length and width, both in meters, and both whole numbers.
Your job is to calculate how much money Santa must pay for the tiles needed to cover the entire floor.
The price of one square meter of tiles is m2price coins.
But there's a twist! Because elves occasionally drop tiles, break tiles, or use them as sled ramps, Santa always buys 5% extra tiles to cover possible losses.
Your task: Compute the total amount totalCost Santa needs to pay for all the tiles, including the extra 5%.
*/

#include <stdio.h>

int main () {

    int Lenght,
        Width,
        m2tiles;
    double  m2price,
            SantaMustPay; 

    printf("What is the lenght and the width of the room ?\n");
    scanf("%i %i", &Lenght, &Width);
    printf("What is the price for tiles per square meter?\n");
    scanf("%lf", &m2price);
    SantaMustPay = m2price * Lenght * Width * 1.05;
    
    printf("%.2f\n",SantaMustPay);          
    getchar();                              
    getchar();                              
    return 0;
}