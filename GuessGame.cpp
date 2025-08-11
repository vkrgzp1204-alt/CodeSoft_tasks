#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    std::cout << "🎯 Welcome to the Number Guessing Game!\n";
    std::cout << "Guess a number between 1 and 100:\n";

    // Loop until user guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "🎉 Congratulations! You guessed it in " << attempts << " attempts.\n";
        }

    } while (userGuess != secretNumber);

    return 0;
}