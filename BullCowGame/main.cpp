//main file for Bulls and Cows Game

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool PlayAgain();

int main() {
	do {
		PrintIntro();
		PlayGame();
	} while ( PlayAgain() ); //replays the game until user responds no

	return 0; //exit the game
}



	//introduce the game
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
	
void PlayGame() {
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		GetGuess();
	};
}
	//get a guess from the player
string GetGuess() {
	string Guess = "";
	cout << endl;
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << endl;

	//repeat the guess back to the player
	cout << "You have entered: " << Guess << endl;
	cout << endl;
	
	return Guess;
}

bool PlayAgain() {
	string Response = "";
	cout << "Would you like to play again?";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}