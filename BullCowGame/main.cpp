//main file for BullCowGame

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

int main() {
	PrintIntro();
	GetGuess();
}

	// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bull and Cows!\n";
	cout << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << "You get 5 attempts.\n";
	cout << endl;
	return;
}
	
	// get a guess from the player
string GetGuess() {
	string Guess = "";

	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		cout << endl;
		cout << "Enter your guess: ";
		getline(cin, Guess);
		cout << endl;

		//repeat the guess back to the player
		cout << "You have entered: " << Guess << endl;
		cout << endl;
		cout << "You have used " << count << " attempts.";
		cout << endl;
	}
	return Guess;
}