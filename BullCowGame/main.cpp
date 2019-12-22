//main file for Bulls and Cows Game

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

int main() {
	PrintIntro();
	PlayGame();
	
	return 0; //exit the game
}


void PlayGame() {
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		GetGuess();
	};
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
	cout << "You have used " << count << " attempts."; //this is broken. count needs to be a var of number of attempts taken
	cout << endl;
	
	return Guess;
}