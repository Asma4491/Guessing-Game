# Guessing-Game
This C++ program that selects a random number between -100 and 50 and prompts the user to guess the number. The program should provide feedback on whether the guess is too high, too low, or correct. It should also track the number of attempts and handle various types of user input gracefully.
# Features
**Random Number Generation:** The program uses the srand and rand functions to generate a random number between -100 and 50. The random number generator is seeded with the current time to ensure a different number each time the program runs.
**User Input Handling:** The program prompts the user to guess the secret number and provides feedback if the guess is too high or too low.
**Input Validation:** The program checks for invalid inputs (non-integer values) and prompts the user to enter a valid integer.
**Attempts Counter:** The program keeps track of the number of attempts the user makes to guess the secret number.
**Congratulatory Message:** When the user guesses the secret number correctly, the program displays a congratulatory message along with the number of attempts taken.
