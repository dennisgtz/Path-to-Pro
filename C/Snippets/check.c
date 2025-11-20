/* Balances a checkbook */

#include <stdio.h>

int main(void)
{
  int cmd;
  float balance = 0.0f, credit, debit;

  printf("****This is an ACME account checking balance program****\n");
  printf("Commands: 0 = Clear  1 = Credit,  2 = Debit, ");
  printf(" 3 = Balance, 4 = Exit\n\n");

  for (;;) {
    printf("Enter command: ");
    scanf("%d", &cmd);
    switch (cmd) {
      case 0:
        balance = 0.0f;
        break;
      case 1:
        printf("Enter credit amount: ");
        scanf("%f", &credit);
        balance += credit;
        break;
      case 2:
        printf("Enter the debit amount: ");
        scanf("%f", &debit);
        balance -= debit;
        break;
      case 3:
        printf("Current balance: $%.2f\n", balance);
        break;
      case 4:
        return 0;
      default:
        printf("Commands: 0 = Clear,  1 = Credit,  2 = Debit, ");
        printf(" 3 = Balance,  4 = Exit\n");
        break;
    }
  }
}