#include <stdio.h>

int main() {
int choice;
printf("Menu:\n");
printf("1. Soda - $1.50\n");
printf("2. Water - $1.00\n");
printf("3. Chips - $2.00\n");
printf("4. Candy - $1.25\n");
printf("enter your choice, moneybag. (1-4): ");
scanf("%d", &choice);

switch (choice) {
case 1:
	printf("You selected Soda. Go ahead, drink your overpriced syrup. Price: $1.50\n");
	break;
case 2:
	printf("You selected Water. What a rip off. Did you know tap water has better regulations than this? Price: $1.00\n");
	break;
case 3:
	printf("You selected Chips. Fatty. Price: $2.00\n");
	break;
case 4:
	printf("You selected Candy. The price here doesn't include dental fees you'll have to pay later. Price: $1.25\n");
	break;
default:
	printf("Invalid selection. I bet your credit card is invalid too. \n");
}

return 0;
}
