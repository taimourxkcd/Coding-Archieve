//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//// JACK QUEEN KING - computer shuffles these card
//// player has to guess the card
//// if he wins he takes 3*bet
//// if he losses he simply looses the game
//// player has $100
//
//int cash = 100;
//
//void play(int bet) {
//	char* c = (char*)malloc(3 * sizeof(char));
//	c[0] = 'J';
//	c[1] = 'Q';
//	c[2] = 'K';
//	printf("shuffling\n");
//	srand(time_t(0));
//	int i;
//	for (i = 0;i < 5;i++) {
//		int x = rand() % 3;
//		int y = rand() % 3;
//		int temp = c[x]; 
//		c[x] = c[y];
//		c[y] = temp;
//	}
//
//	int playerGuess;
//	printf("what is your guess >\n");
//	scanf_s("%d",&playerGuess);
//	if (c[playerGuess - 1] == 'Q') {
//		cash += 3 * bet;
//		printf("YOU WIN ! Result = %c%c%c Total cash = %d\n",c[0],c[1],c[2],cash);
//	}
//	else {
//		cash -= bet;
//		printf("YOU LOSE ! Result = %c%c%c Total cash = %d\n", c[0], c[1], c[2],cash);
//
//	}
//}
//
//int main() {
//
//	int bet;
//
//	while (cash > 0) {
//		printf("Whats your bet: $\n");
//		scanf_s("%d",&bet);
//
//		if (bet == 0 || bet > cash) break;
//		play(bet);
//	}
//
//
//
//}