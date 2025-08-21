 #include <iostream>

 using namespace std;

 int main() {
        int number, guess;
        int attempts = 0;
    
        
        srand(time(0));
        number = rand() % 100 + 1;
    
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "A number has been selected between 1 and 100." << endl;
    
        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
    
            if (guess < number) {
                cout << "Too low! Try again." << endl;
            } else if (guess > number) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You've guessed the number " << number 
                    << " in " << attempts << " attempts." << endl;
            }
        } while (guess != number);
    
        return 0;
 }
 