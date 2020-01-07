#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class fBullCowGame {
public:
	fBullCowGame(); //constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO make a more rich return value.
	bool CheckGuessValidity(FString); // TODO make a more rich return value.
	// TODO provide a method for counting bulls & cows, & increasing try #.

private:
	// see constructor for initialisation
	int32 MyCurrentTry;
	int32 MyMaxTries;
};