#include <iostream>
using namespace std;

double totalCost(int numberParameter, double priceParameter);
//Compute the total cost, incuding 5% sales tax,
//on numberParameter items at a cost of priceParameter each.

int main() {
    double price, bill;
    int number;

    cout << "Enter the number of items perchased: ";
    cin >> number;
    cout << "Enter the price per items $";
    cin >> price;

    bill = totalCost(number, price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
      << "$" << price << " each.\n"
      << "Final bill, including tax, is $" << bill
      << endl;
    
      return 0;
}

double totalCost(int numberParameter, double priceParameter) {
    const double TAXRATE = 0.05; //5% sales tax
    double subtotal;

    subtotal = priceParameter * numberParameter;
    return (subtotal + subtotal*TAXRATE);

}