#pragma once
#include <string>


class fBullCowGame {
public:
	fBullCowGame(); //constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO make a more rich return value.
	bool CheckGuessValidity(std::string); // TODO make a more rich return value.
	// TODO provide a method for counting bulls & cows, & increasing try #.

private:
	// see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};