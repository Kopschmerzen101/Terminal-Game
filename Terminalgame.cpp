#include <iostream>
#include <cstdlib>
#include <ctime>

void startGame() {
    int numberToGuess, userGuess, attempts = 0;

    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    // Generate random number between 1 and 100
    numberToGuess = std::rand() % 100 + 1;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    // Main game loop
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        // Check if the guess is correct
        if (userGuess == numberToGuess) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
        // Give a hint if the guess is too high or too low
        else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }
}

int main() {
    char playAgain;

    do {
        startGame();
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank you for playing! Goodbye." << std::endl;
    return 0;
}