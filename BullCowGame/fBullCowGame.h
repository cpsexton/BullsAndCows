#pragma once
#include <string>

class fBullCowGame {
public:
	void Reset(); // TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry;
	bool IsGameWon();
	bool CheckGuessValidity(std::string);


private:
	int MyCurrentTry;
	int MyMaxTries;

};