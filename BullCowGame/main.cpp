//main file for Bulls and Cows Game

#include <iostream>
#include <string>
#include "fBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool PlayAgain();

fBullCowGame BCGame; //creates instance of a new game

int main() {
	do {
		PrintIntro();
		PlayGame();
	} while ( PlayAgain() ); //replays the game until user responds no

	return 0; //exit the game
}



	//introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 4;
	std::cout << "Welcome to Bulls and Cows!\n";
	std::cout << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH; 
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << "You get 5 attempts.\n";
	std::cout << std::endl;
	return;
}

void PlayGame() {
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	for (int count = 1; count <= MaxTries; count++) {
		GetGuess();
	};
}
	//get a guess from the player
std::string GetGuess() {
	std::string Guess = "";
	std::cout << std::endl;

	int CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Attempt " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);

	//repeat the guess back to the player
	std::cout << "You have entered: " << Guess << std::endl;
	std::cout << std::endl;
	
	return Guess;
}

bool PlayAgain() {
	std::string Response = "";
	std::cout << "Would you like to play again (y/n)? ";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}