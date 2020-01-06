//main file for Bulls and Cows Game

#include <iostream>
#include <string>



void PrintIntro();
void PlayGame();
std::string GetGuess();
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
	std::cout << "Welcome to Bull and Cows!\n";
	std::cout << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH; 
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << "You get 5 attempts.\n";
	std::cout << std::endl;
	return;
}
	
void PlayGame() {
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		GetGuess();
	};
}
	//get a guess from the player
std::string GetGuess() {
	std::string Guess = "";
	std::cout << std::endl;
	std::cout << "Enter your guess: ";
	std::getline(std::cin, Guess);
	std::cout << std::endl;

	//repeat the guess back to the player
	std::cout << "You have entered: " << Guess << std::endl;
	std::cout << std::endl;
	
	return Guess;
}

bool PlayAgain() {
	std::string Response = "";
	std::cout << "Would you like to play again?";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}