//C program to display withdrawals
/*
Name:Given Abuya
Reg No: PA106/G/28830/25
Description:Account Withdrawals
*/

#include <stdio.h>

int main() {
    float accountbalance = 25000.0;
    float withdrawal;

    printf("Your current account balance is %.2f KES\n", accountbalance);

    // Loop continues until accountbalance becomes 0
    while (accountbalance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdrawal);

        if (withdrawal <= 0) {
            printf("Invalid amount! Please enter a positive value.\n");
            continue;
        }

        if (withdrawal <= accountbalance) {
            accountbalance -= withdrawal;
            printf("You have successfully withdrawn %.2f KES.\n", withdrawal);
            printf("Your new balance is %.2f KES.\n", accountbalance);
        } else {
            printf("Insufficient funds! You only have %.2f KES available.\n", accountbalance);
        }

        if (accountbalance == 0) {
            printf("\nYour account balance is now zero.\n");
            printf("No more withdrawals allowed!\n");
        }
    }

    return 0;
}