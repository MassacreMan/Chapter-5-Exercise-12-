// This program is a random numbr guessing game. The user has to guess a number between 1 and 100, and the program will give hints if the guess is too high or too low.
#include <iostream>
#include <random>
using namespace std;

int main() {
	// Generate a random number between 1 and 100
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);
	int randomNumber = dis(gen);
	int userGuess = 0;
	cout << "Welcome to the Number Guessing Game! My name is Joshua." << endl;
	cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;
	// Loop until the user guesses the correct number
	while (userGuess != randomNumber) {
		cout << "Enter your guess: ";
		cin >> userGuess;
		if (userGuess < randomNumber) {
			cout << "Too low! Try again." << endl;
		}
		else if (userGuess > randomNumber) {
			cout << "Too high! Try again." << endl;
		}
		else {
			cout << "Congratulations! You've guessed the correct number: " << randomNumber << endl;
			cout << "That was an interesting game. How about a nice game of chess? " << endl;
		}
	}
	return 0;
}