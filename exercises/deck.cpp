#include <iostream>
#include <string>
using namespace std;

void buildDeck(string *deck);
void printDeck(string deck[]);

int main() {
  string deck[52];

  buildDeck(deck);
  printDeck(deck);
  return 0;
}

void buildDeck(string *deck) {
  string suits[] = { "♥", "♦", "♣", "♠" };
  string numbers[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
  int cardIndex;
  for (int suitIndex = 0; suitIndex < 4; suitIndex++) {
    for (int numberIndex = 0; numberIndex < 13; numberIndex++) {
      cardIndex = 13 * suitIndex + numberIndex;
      deck[cardIndex] = numbers[numberIndex] + suits[suitIndex];
    }
  }
}

void printDeck(string deck[]) {
  for (int i = 0; i < 52; i++) {
    cout << deck[i] << endl;
  }
}
