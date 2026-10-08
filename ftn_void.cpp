#include <iostream>
using namespace std;

void iceCreamDivision(int, double);

int main(){

    int peopleNum;
    double weight;
    
    cout << "Enter a number of people who wish the ice cream: ";
    cin >> peopleNum;
    cout << "Enter a weight of ice cream(ounces): ";
    cin >> weight;

    iceCreamDivision(peopleNum, weight);

    return 0;


}

void iceCreamDivision(int number, double totalWeight) {
    double portion;

    if (number == 0) {
        cout << "Cannot divide among Zero customers.\n";
        return;
    }
    portion = totalWeight/number;
    cout << "Each one recevies "
         << portion << " ounces of ice cream." << endl;
}