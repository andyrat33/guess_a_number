#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int guess;
	bool notGuessed{true};
	int targetNumber = arc4random() % 1000 + 1;
	int guessNumber = 0;

	/* cout << "The number is " << targetNumber << "\n"; */

	cout << "Guess the number";
	cout << "\n" << "I thought of a number between 1 and 1000\n";
	
	while (notGuessed) {
		cout << "This is Guess " << guessNumber << "\nEnter your guess: ";
		cin >> guess;
		guessNumber++;
		if (guess < targetNumber) {
			cout << "Higher\n";
			
		} else if (guess > targetNumber) 
			{
			cout << "\nLower\n";
		} else if (guess == targetNumber) {
			notGuessed = false;
			cout << "Congratulations you got it!\n";
			break;
		}
	}
	
}