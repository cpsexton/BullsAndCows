#pragma once
#include <string>


class fBullCowGame {
public:
	fBullCowGame(); //constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO make a more rich return value.
	bool CheckGuessValidity(std::string);


private:
	// see consturctor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};