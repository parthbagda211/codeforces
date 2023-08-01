#include <iostream>
#include <vector>

using namespace std;

int main() {
    
        int n;
        cin >> n;

        vector<int> cards(n);
        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
        }

        int unlocked = 1; // Number of unlocked cards
        int points = 0;    // Total victory points earned

        for (int i = 0; i < n; ++i) {
            // Unlock the first unlocked cards from the top
            unlocked = max(unlocked - 1, 0) + cards[i];

            // Earn victory points equal to the value on the current card
            points += cards[i];

            // Stop the game if all cards are locked
            if (unlocked == 0) {
                break;
            }
        }

        cout << points << endl;
    

    return 0;
}
