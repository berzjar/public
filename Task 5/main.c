/*
Task 5 :  Santa’s Magical ASCII Countdown
    Santa Claus is preparing for his Christmas Eve flight,
    but before the sleigh lifts off the ground, he must complete
    a magical countdown from 10 to 0. The countdown must be displayed
    in big ASCII-art numbers, using the provided DIGITS array.
    Your task is to help Santa launch his sleigh!
    Task Requirements
    Create a program that:
    Starts a countdown from 10 down to 0.
    Each second:
    Clears the screen.
    Displays the current number using the ASCII art from the DIGITS array.
    Shows a festive message, such as:
    "Santa is preparing…"
    "Reindeer are buckling up…"
    "Sleigh warming up…"
    When the countdown reaches 0, display:
    SANTA’S SLEIGH IS LAUNCHING!
    Expected Output Example (simplified)
    Timer: 5
    <ASCII art for number 5>
    Sleigh warming up...
    And finally:
    <ASCII art for number 0>
    🎅✨ SANTA’S SLEIGH IS LAUNCHING! ✨🎅
*/

#include <stdio.h>
#include <windows.h>

const char number[10][50] = {
    {" 000 \n0   0\n0   0\n0   0\n 000 \n"},
    {"  1  \n 11  \n  1  \n  1  \n 111 \n"},
    {" 222 \n2   2\n   2 \n  2  \n 2222\n"},
    {" 333 \n3   3\n  33 \n3   3\n 333 \n"},
    {"4  4 \n4  4 \n44444\n   4 \n   4 \n"},
    {"55555\n5    \n5555 \n    5\n5555 \n"},
    {" 666 \n6    \n6666 \n6   6\n 666 \n"},
    {"77777\n    7\n   7 \n  7  \n 7   \n"},
    {" 888 \n8   8\n 888 \n8   8\n 888 \n"},
    {" 999 \n9   9\n 9999\n    9\n 999 \n"},
};

const char message[11][50] = {
    {"Santa is checking the sleigh..."},
    {"Reindeer are stretching their legs..."},
    {"Loading gifts into the sleigh..."},
    {"Santa is checking his list twice..."},
    {"Ropes and harnesses are being tightened..."},
    {"Reindeer are buckling up..."},
    {"Sleigh warming up..."},
    {"Santa adjusting his hat and coat..."},
    {"Final checks on gifts..."},
    {"Ready to lift off..."},
    {"SANTA`S SLEIGH IS LAUNCHING!"}
};
int main () {

    for(int i=9;i>=0;i--){
    printf("%s\n",number[i]); 
    printf("%s",message[i]);
    Sleep(1000);    
    system("cls");
    }
    
    for(int i=0;i<20;i++){
        printf("%s\n",message[10]);
        Sleep(100);
    }
    getchar();
    getchar();
    return 0;
}