#include <iostream>
using namespace std;

int main() {

    int number;
    int i;

    cout << "Enter a number between 2 and 1,000 (inclusive): ";
    cin >> number;

    for (i = 2; i < number; i++)
    {
        /* i를 2부터 (number-1)까지 증가시키며 나누어떨어지는지 확인하기 */
        if (number % i == 0) {
            cout << number << " is not a prime.\n";
            return 0;
        }
    }

    cout << number << " is a prime.\n";

    return 0;
}