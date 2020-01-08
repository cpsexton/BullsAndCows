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
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	MyCurrentTry++;
	FBullCowCount BullCowCount;

	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++) {
		for (int32 j = 0; j < HiddenWordLength; j++){
			if (Guess[i] == MyHiddenWord[i]) {
				if (i == j) {
					BullCowCount.Bulls++;
				} else {
					BullCowCount.Cows++;
				}
			}
		}
	}
	return BullCowCount;
}
