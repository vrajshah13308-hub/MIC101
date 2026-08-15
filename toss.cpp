#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int heads = 0, tails = 0;
    int result;

    cout << "Tossing the coin 50 times...\n\n";

    for (int i = 1; i <= 50; i++) {
        result = rand() % 2;

        if (result == 0) {
            cout << "Toss " << i << ": Heads\n";
            heads++;
        } else {
            cout << "Toss " << i << ": Tails\n";
            tails++;
        }
    }

    cout << "\n--- Results ---\n";
    cout << "Total Heads: " << heads << endl;
    cout << "Total Tails: " << tails << endl;

    if (heads >= 28)
        cout << "You WIN the game!\n";
    else
        cout << "You LOSE the game. Try again!\n";

    return 0;
}