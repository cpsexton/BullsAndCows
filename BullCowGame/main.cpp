//main file for BullCowGame

#include <iostream>
#include <string>

using namespace std;

int main() {
	constexpr int WORD_LENGTH = 9;
	// introduce the game
	cout << "Welcome to Bull and Cows!\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: " << Guess;
	cin >> Guess;
	cout << "You have entered " << Guess;
	

	//repeat the guess back to the player

	return 0;
}