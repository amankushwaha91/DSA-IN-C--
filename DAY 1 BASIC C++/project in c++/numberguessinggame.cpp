#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

void playGame() {
    
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "\n=============================\n";
    cout << "     NUMBER GUESSING GAME     \n";
    cout << "=============================\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Try to guess it!\n\n";

    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "\n🎉 Congratulations! You guessed the correct number " 
                 << secretNumber << " in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);
}

int main() {
    srand(time(0)); 

    int choice;
    do {
        cout << "\n=============================\n";
        cout << "         MAIN MENU           \n";
        cout << "=============================\n";
        cout << "1. Play Game\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                playGame();
                break;
            case 2:
                cout << "Thank you for playing! Goodbye 👋\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while(choice != 2);

    return 0;
}