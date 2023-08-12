#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with current time
    
    int lowerBound = 1;   // Define the lower bound of the random number range
    int upperBound = 100; // Define the upper bound of the random number range
    int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
    
    int guess;
    int tries = 0;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    
    do {
        std::cout << "Enter your guess between " << lowerBound << " and " << upperBound << ": ";
        std::cin >> guess;
        
        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }
        
        tries++;
    } while (guess != secretNumber);
    
    std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << tries << " tries." << std::endl;
    
    return 0;
}

