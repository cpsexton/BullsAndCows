#include "fBullCowGame.h"

fBullCowGame::fBullCowGame() { Reset(); }

int fBullCowGame::GetMaxTries() const { return MyMaxTries; }
int fBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void fBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 5;
	MyMaxTries = MAX_TRIES;
	
	MyCurrentTry = 1;
	return;
}

bool fBullCowGame::IsGameWon() const
{
	return false;
}

bool fBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
