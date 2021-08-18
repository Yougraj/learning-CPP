#include <iostream>
using namespace std;

// int main()
// {
//     int secretNum = 7;
//     int guess;
//     while (secretNum != guess) {
//         cout << "Enter guess: ";
//         cin >> guess;
//     }

//     cout << "You win" << endl;

//     return 0;
// }


int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;


    do {
        if(guessCount < guessLimit) {
        cout << "Enter Guess: ";
        cin >> guess;
        guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    while (secretNum != guess && !outOfGuesses);




    if (outOfGuesses) {
        cout << "You Lose" << endl;
    } else {
        cout << "You Win!" << endl;
    }
    
    
    
    return 0;
}