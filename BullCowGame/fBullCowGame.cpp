#include "fBullCowGame.h"

using int32 = int;

fBullCowGame::fBullCowGame() { Reset(); }

int32 fBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 fBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void fBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 5;
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
