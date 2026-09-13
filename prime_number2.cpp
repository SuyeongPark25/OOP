#include <iostream>
using namespace std;

int main() {

    int number;
    int i;
    int j;

    cout << "Enter a number between 2 and 1,000 (inclusive): ";
    cin >> number;

    for (j = 2; j <= number; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0) {
                break;
            }
        }

        if (i == j) {
            cout << j << endl;
        }
    }

    return 0;
}
