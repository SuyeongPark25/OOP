#include<iostream>
using namespace std;

void fillUp(int a[], int size);

int main(){

    int size;
    int a[100];
    cout << "What is your favorite number: ";
    cin >> size;
    fillUp(a, size);

}

void fillUp(int a[], int size){
    cout << "Enter " << size << " numbers:\n";

    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    cout << "The last array index used is " << (size - 1) << endl;
}