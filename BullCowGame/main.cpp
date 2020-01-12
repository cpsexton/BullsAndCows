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
FText GetValidGuess();
bool PlayAgain();
void PrintGameSummary();

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

	// loop asking for guesses while the game is NOT won
	// and there are still tries remaining
	while (!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries) {
		FText Guess = GetValidGuess();
	

		FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << std::endl;
	};
	// TODO summerise game
	PrintGameSummary();
}

	//get a guess from the player
FText GetValidGuess() {
	EGuessStatus Status = EGuessStatus::Invalid_Status;
	do {
		// get a guess from the player
		FText Guess = "";
		std::cout << std::endl;
		int32 CurrentTry = BCGame.GetCurrentTry();
		std::cout << "Attempt " << CurrentTry << " of " << BCGame.GetMaxTries() << ". Enter your guess : ";
		std::getline(std::cin, Guess);

		// check status and give feedback
		Status = BCGame.CheckGuessValidity(Guess);
		switch (Status) {
		case EGuessStatus::Wrong_Length:
			std::cout << "Error: Please enter a " << BCGame.GetHiddenWordLength() << " letter word. \n";
			break;
		case EGuessStatus::Not_Isogram:
			std::cout << "Error: Please enter an isogram. (no repeating letters) \n";
			break;
		case EGuessStatus::Not_Lowercase:
			std::cout << "Error: Please use lower case. \n";
			break;
		default:
			return Guess;
		}
	} while (Status !=  EGuessStatus::OK);  // keep looping until we get no errors
}

// asks player to play again
bool PlayAgain() {
	FText Response = "";
	std::cout << "Would you like to play again with the same hidden word (y/n)? ";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

void PrintGameSummary() {
	if (BCGame.IsGameWon()) {
		std::cout << std::endl << "WELL DONE - YOU WON! \n";
	} else {
		std::cout << "Better luck next time! \n";
	}
}