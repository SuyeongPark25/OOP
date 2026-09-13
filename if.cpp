#include <iostream>
using namespace std;

int main()
    {
        int myScore;
        int yourScore;

        cout << "What is my score?\n";
        cin >> myScore;
        cout << "What is your score?\n";
        cin >> yourScore;

        int wager;
        cout << "What is current wager?\n";
        cin >> wager;
        
        if (myScore > yourScore) {
            cout << "I win!\n";
            wager = wager + 100;

        } else {
            cout << "I wish these were golf scores.\n";
            wager = 0;
        }
        cout << wager;
    }