#include "FBullCowGame.h"

using FString = std::string;
using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 5;
	MyMaxTries = MAX_TRIES;
	
	const FString HIDDEN_WORD = "Poop";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}

//receives valid guess, incriments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// incriments turn number
	MyCurrentTry++;

	// set up a return structure
	BullCowCount BullCowCount;

	// loop through all letters in the guess
		// compare letters against the hidden word

	return BullCowCount;
}
