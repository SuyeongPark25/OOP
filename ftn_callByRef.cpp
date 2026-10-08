#include <iostream>
using namespace std;

void getNumbers(int &input1, int &input2);

void swapValues(int &variable1, int &variable2);

void showResults(int output1, int output2);

int main() {
    int firstNum, secoundNum;

    getNumbers(firstNum, secoundNum);
    swapValues(firstNum, secoundNum);
    showResults(firstNum, secoundNum);
    return 0;
}

void getNumbers(int &input1, int &input2) {
    cout << "Enter two integers: ";
    cin >> input1
        >> input2;
}

void swapValues(int &variable1, int &variable2) {
    int temp;

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void showResults(int output1, int output2) {
    cout << "In reverse order the numbers are: "
         << output1 << " " << output2 << endl;
}
