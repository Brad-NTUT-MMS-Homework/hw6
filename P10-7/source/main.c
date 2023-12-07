#include <stdio.h>

typedef struct card {
	char *face;
	char *suit;
} card;

int main(void) {
	card aCard;
	card* cardPtr = &aCard; // pointer to card

	aCard.face = "Ace";
	aCard.suit = "Spades";

	printf("%s%s%s\n%s%s%s\n%s%s%s\n",
		aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);

	return 0;
}