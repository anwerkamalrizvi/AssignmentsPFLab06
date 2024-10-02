/* Q4 
*NAME: SYED ANWER
*SECTION: BAI-1A
*ROLL NO: 24K-0033
*QUESTION: You are tasked with developing a Messaging Streak Tracker for a social media app (similar to Snapchat
streaks). The app tracks how many consecutive days two users send messages to each other.
• Each day, the user must send a message to their friend to maintain the streak.
• If the user fails to send a message on any day, the streak is reset to 0.
• The system should track the streak and update it based on whether the user sent a message that
day.
*/

#include <stdio.h>

int main(void){
    char snap; 
    char Continue;
    int Streak = 0;
    int count = 1;

    while (count){
        printf("Did you send a snap today? (Y/N): ");
        scanf(" %c", &snap);

        if (snap == 'Y' || snap == 'y') {
            Streak = Streak + 1;
            printf("Current streak is: %d days.\n", Streak);
        }//end if 1 
	else if (snap == 'N' || snap == 'n') {
            Streak = 0; 
            printf("Streak broken.\nCurrent streak is: %d days.\n", Streak);
        }//end if else 1 
	else {
            printf("Invalid Input.\n");
        }//end else 1

        printf("Continue tracking your streak? (Y/N): ");
        scanf(" %c", &Continue);
        if (Continue == 'N' || Continue == 'n') {
            count = 0;
        }//end if 2
    }//end while

    printf("Your final streak is: %d days.\n", Streak);
    return 0;
}//end main function


