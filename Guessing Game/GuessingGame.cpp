#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> // Include this header file for INT_MAX

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between -100 and 50
    int secretNumber = rand() % 151 - 100;
    int guess;
    int attempts = 0;
    cout << "Guess the secret number between -100 and 50: ";

    while (true) {
        cin >> guess;
        attempts++;
        
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(INT_MAX, '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter an integer: ";
            continue;
        }

        if (guess > secretNumber) {
            cout << "Too high! Try again: ";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the secret number in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}
