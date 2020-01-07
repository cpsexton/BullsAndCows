#include "fBullCowGame.h"

int fBullCowGame::GetMaxTries() { return MyMaxTries; }
int fBullCowGame::GetCurrentTry() { return MyCurrentTry; }

void fBullCowGame::Reset()
{
	return;
}

bool fBullCowGame::IsGameWon()
{
	return false;
}

bool fBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
