/* This is the console executable, that makes use of the BullCow class.
This acts as the view in a MVC pattern, and is responsible for all
user interaction. For game logic see the FBullCowGame class.
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool PlayAgain();

FBullCowGame BCGame; //creates instance of a new game


int main() {
	do {
		PrintIntro();
		PlayGame();
	} while ( PlayAgain() ); //replays the game until user responds no

	return 0; //exit the game
}



	//introduce the game
void PrintIntro() {
	std::cout << std::endl << std::endl;
	std::cout << "Welcome to Bulls and Cows!\n";
	std::cout << std::endl;
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << "You get 5 attempts.\n";
	std::cout << std::endl;
	return;
}

void PlayGame() {
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	for (int32 count = 1; count <= MaxTries; count++) {
		FText Guess = GetGuess();
	
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << std::endl;

	};
}

	//get a guess from the player
FText GetGuess() {
	FText Guess = "";
	std::cout << std::endl;

	int32 CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Attempt " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);

	return Guess;
}

bool PlayAgain() {
	FText Response = "";
	std::cout << "Would you like to play again (y/n)? ";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}